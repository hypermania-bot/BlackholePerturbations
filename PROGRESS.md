# Progress

## CUDA double-double Teukolsky solver

- Problem encountered: the existing CUDA Teukolsky backend evolved fields in `thrust::complex<double>` only, and there was no double-double arithmetic path on the GPU.
- Solution: added `DoubleDouble::Real` and `DoubleDouble::Complex` CUDA arithmetic, plus `CudaTeukolskyScalarPDEDoubleDouble` and `CudaTeukolskyDoubleDoubleSource` with double-double derivative, RHS, source, and fixed-step RK4 kernels.
- How to avoid it in future: keep precision-specific GPU arithmetic isolated from the existing double backend, and add new CUDA equation classes instead of changing the current odeint/thrust specialization in place.
- Git commit ID: `1d85400`

## Build compatibility fixes

- Problem encountered: the copied checkout did not compile with this toolchain because the vendored Boost tree is missing `boost/typeof/incr_registration_group.hpp`, generated coefficient code used `std::complex(...)` without template arguments, a dependent partial specialization in `cubic_scalar.hpp` was rejected by GCC, and host C++ Thrust symbols used a different CUDA architecture namespace from nvcc objects.
- Solution: added a project-local Boost.Typeof compatibility shim under `src/compat`, included only the needed Odeint headers, made generated `std::complex<double>(...)` constructors explicit, rewrote the accumulator termination as a boolean template specialization, and propagated `__CUDA_ARCH_LIST__` from `SMS` to host C++ flags.
- How to avoid it in future: compile generated files with the supported project compiler after regeneration, keep host and nvcc architecture defines synchronized, and prefer project-local compatibility shims over editing `external/`.
- Git commit ID: `1d85400`

## Generated coefficient equivalence verifier

- Problem encountered: the generated coefficient constructor rewrite is large and hard to inspect manually even though it should be a semantic no-op.
- Solution: added `scripts/verify_coeff_complex_ctor_equivalence.py`, which compares two git refs and succeeds only if generated coefficient files differ by `std::complex(...)` to `std::complex<double>(...)` constructor spelling.
- How to avoid it in future: run the verifier whenever generated coefficient files are mechanically rewritten for compiler compatibility.
- Git commit ID: `cf385fb`
