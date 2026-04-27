#!/usr/bin/env python3
"""Verify generated coefficient files only changed complex constructor spelling.

The Teukolsky generated coefficient sources previously used expressions like

    std::complex(static_cast<double>(0), static_cast<double>(4.0))

The current code spells the same constructor explicitly as

    std::complex<double>(static_cast<double>(0), static_cast<double>(4.0))

This script compares two git refs and succeeds only when every generated
coefficient file in the later ref is byte-for-byte equal to the earlier ref
after that single semantic-preserving normalization is applied.
"""

from __future__ import annotations

import argparse
import re
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path


DEFAULT_PATH_PREFIXES = (
    "src/teukolsky_generated/",
)
DEFAULT_EXTRA_PATHS = (
    "src/teukolsky_lambda_generated.cpp",
)


COMPLEX_CTOR_PATTERN = re.compile(
    r"std::complex\s*"
    r"\(\s*"
    r"static_cast\s*<\s*double\s*>\s*\("
)


@dataclass(frozen=True)
class FileResult:
    path: str
    replacements: int
    identical_without_rewrite: bool


def run_git(args: list[str]) -> str:
    result = subprocess.run(
        ["git", *args],
        check=True,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )
    return result.stdout


def git_file(ref: str, path: str) -> str:
    return run_git(["show", f"{ref}:{path}"])


def generated_paths(ref: str) -> list[str]:
    output = run_git(["ls-tree", "-r", "--name-only", ref])
    paths = []
    for path in output.splitlines():
        if path.startswith(DEFAULT_PATH_PREFIXES) and path.endswith(".cpp"):
            paths.append(path)
        elif path in DEFAULT_EXTRA_PATHS:
            paths.append(path)
    return sorted(paths)


def normalize_complex_ctor(text: str) -> tuple[str, int]:
    return COMPLEX_CTOR_PATTERN.subn("std::complex<double>(static_cast<double>(", text)


def verify_file(before_ref: str, after_ref: str, path: str) -> FileResult:
    before = git_file(before_ref, path)
    after = git_file(after_ref, path)
    normalized_before, replacements = normalize_complex_ctor(before)
    if normalized_before != after:
        normalized_after, _ = normalize_complex_ctor(after)
        if normalized_before == normalized_after:
            raise AssertionError(
                f"{path}: after-ref still contains non-explicit std::complex constructors"
            )
        raise AssertionError(
            f"{path}: contains changes other than std::complex(...) -> std::complex<double>(...)"
        )
    return FileResult(
        path=path,
        replacements=replacements,
        identical_without_rewrite=(before == after),
    )


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Verify generated Teukolsky coefficient changes are semantic no-ops."
    )
    parser.add_argument(
        "--before-ref",
        default="origin/main",
        help="git ref before the constructor spelling change (default: origin/main)",
    )
    parser.add_argument(
        "--after-ref",
        default="HEAD",
        help="git ref after the constructor spelling change (default: HEAD)",
    )
    parser.add_argument(
        "--path",
        action="append",
        dest="paths",
        help="specific generated file to check; may be repeated",
    )
    return parser.parse_args()


def main() -> int:
    args = parse_args()
    repo_root = Path(run_git(["rev-parse", "--show-toplevel"]).strip())
    if Path.cwd() != repo_root:
        # Make git path handling deterministic when the script is launched from
        # a subdirectory.
        import os

        os.chdir(repo_root)

    before_paths = set(generated_paths(args.before_ref))
    after_paths = set(generated_paths(args.after_ref))
    paths = sorted(args.paths) if args.paths else sorted(before_paths | after_paths)

    missing_before = sorted(set(paths) - before_paths)
    missing_after = sorted(set(paths) - after_paths)
    if missing_before or missing_after:
        if missing_before:
            print(f"Missing in {args.before_ref}: {missing_before}", file=sys.stderr)
        if missing_after:
            print(f"Missing in {args.after_ref}: {missing_after}", file=sys.stderr)
        return 2

    results: list[FileResult] = []
    try:
        for path in paths:
            results.append(verify_file(args.before_ref, args.after_ref, path))
    except AssertionError as exc:
        print(f"FAILED: {exc}", file=sys.stderr)
        return 1

    rewritten = [result for result in results if not result.identical_without_rewrite]
    total_replacements = sum(result.replacements for result in rewritten)
    print(
        f"Verified {len(results)} generated coefficient files from "
        f"{args.before_ref} to {args.after_ref}."
    )
    print(
        f"{len(rewritten)} files required constructor normalization; "
        f"{total_replacements} std::complex constructors were made explicit."
    )
    print("No other text changes were found in the generated coefficient files.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
