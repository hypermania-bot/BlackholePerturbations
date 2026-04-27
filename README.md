# BlackholePerturbations
My numerical tools for studying blackhole perturbations. They were used to produce the numerical results in papers [arXiv:2503.19967](https://arxiv.org/abs/2503.19967) and [arXiv:2603.20379](https://arxiv.org/abs/2603.20379).

Numerical functionalities implemented for [arXiv:2503.19967](https://arxiv.org/abs/2503.19967):

1. The Regge-Wheeler (RW) equation for a single harmonic mode with a customizable source.
2. The Regge-Wheeler (RW) equations for all real harmonics modes $` \ell \leq \ell_{\mathrm{max}} `$, coupled via a cubic self-interaction.

Numerical functionalities implemented for [arXiv:2603.20379](https://arxiv.org/abs/2603.20379):

1. The Teukosky equation (with change of variable $` \tilde{\psi} = (\Delta^s r) \psi `$) for all spherical harmonic modes $` \ell \leq \ell_{\mathrm{max}} \leq 6 `$. Mode-mode coupling coefficients (for spin-weights $` -2 \leq s \leq 2 `$ and Kerr parameters $` M `$ and $` a `$) are automatically computed and included in the numerical evolution.
2. Two optional sources for the Teukolsky equation, including one that decays like $` r^{-\beta} `$ and one that emulates a Dirac delta function $` \delta(r-r')\delta(t-t') `$.
3. An effective source that corresponds to a $` \lambda \psi^2 `$ nonlinear term for a scalar field in Kerr spacetime.
4. Artifical Kreiss-Oliger dissipation, which is required for stable numerical evolution when $` s \neq 0 `$.
5. A CUDA double-double precision Teukolsky evolution path, exposed by `CudaTeukolskyScalarPDEDoubleDouble` and `CudaTeukolskyDoubleDoubleSource` in `src/teukolsky_double_double_cuda.cuh`. This backend keeps the evolved fields, derivative buffers, source data, and coupling coefficient storage in double-double complex form and provides fixed-step RK4 stepping through `rk4_step()` and `integrate_fixed_rk4()`.



## Plotting
Some data for the RW equation are already included in the codebase under `/output`. Run the `plot.nb` Mathematica notebook to plot these data. New data can be generated from the code.

## Functionalities
The `src/example.cpp` file has two functions:

1. `run_sourced_eqn()` sets up parameters for the sourced RW equation, and run them in parallel. See section 2.3 of [arXiv:2503.19967](https://arxiv.org/abs/2503.19967) for details.
2. `run_coupled_eqn()` sets up parameters for the coupled RW equations corresponding to a scalar field with cubic self-interaction. See section 3.3 of [arXiv:2503.19967](https://arxiv.org/abs/2503.19967) for details.

The `src/main.cpp` file has three lambda functions in `main()`:

1. `run_teukolsky_sourced` sets up parameters for the sourced Teukolsky equation. See section III.A of [arXiv:2603.20379](https://arxiv.org/abs/2603.20379) for details.
2. `run_teukolsky_dirac_delta` sets up parameters for the Teukolsky equation sourced by a Dirac delta function source $` \delta(r-r')\delta(t-t') `$. Useful for studying the Green's function of the Teukolsky equation.
3. `run_teukolsky_cubic` sets up parameters for the Teukolsky equation corresponding to a scalar field with cubic self-interaction. See section III.B of [arXiv:2603.20379](https://arxiv.org/abs/2603.20379) for details.

## Compilation
Compiler requirement: 

1. A C++ compiler supporting C++20. I used [g++ 12.2.0](https://gcc.gnu.org/).
2. CUDA compiler `nvcc` for compiler GPU kernels. See [CUDA Toolkit](https://developer.nvidia.com/cuda-toolkit).

The codebase also makes use of `boost` and `Eigen` library, which are included in `/external`.

Compilation should be as easy as running `make` at the project directory. Note that the compilation could take a while.

