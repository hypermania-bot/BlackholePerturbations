/*!
  \file double_double_cuda.cuh
  \brief Double-double arithmetic helpers usable from CUDA kernels.
*/
#ifndef DOUBLE_DOUBLE_CUDA_CUH
#define DOUBLE_DOUBLE_CUDA_CUH

#include <cmath>

namespace DoubleDouble {

struct Real {
  double hi;
  double lo;

  __host__ __device__ Real() : hi(0.0), lo(0.0) {}
  __host__ __device__ Real(const double hi_) : hi(hi_), lo(0.0) {}
  __host__ __device__ Real(const double hi_, const double lo_) : hi(hi_), lo(lo_) {}

  __host__ __device__ explicit operator double() const { return hi + lo; }
};

__host__ __device__ inline Real renormalize(const double hi, const double lo)
{
  const double s = hi + lo;
  const double e = lo - (s - hi);
  return Real(s, e);
}

__host__ __device__ inline Real two_sum(const double a, const double b)
{
  const double s = a + b;
  const double bb = s - a;
  const double e = (a - (s - bb)) + (b - bb);
  return Real(s, e);
}

__host__ __device__ inline Real two_prod(const double a, const double b)
{
  const double p = a * b;
  const double e = fma(a, b, -p);
  return Real(p, e);
}

__host__ __device__ inline Real operator-(const Real a)
{
  return Real(-a.hi, -a.lo);
}

__host__ __device__ inline Real operator+(const Real a, const Real b)
{
  const Real s = two_sum(a.hi, b.hi);
  return renormalize(s.hi, s.lo + a.lo + b.lo);
}

__host__ __device__ inline Real operator-(const Real a, const Real b)
{
  return a + (-b);
}

__host__ __device__ inline Real operator*(const Real a, const Real b)
{
  const Real p = two_prod(a.hi, b.hi);
  return renormalize(p.hi, p.lo + a.hi * b.lo + a.lo * b.hi);
}

__host__ __device__ inline Real operator/(const Real a, const Real b)
{
  const double q1 = a.hi / b.hi;
  const Real r = a - b * Real(q1);
  const double q2 = r.hi / b.hi;
  return Real(q1) + Real(q2);
}

__host__ __device__ inline Real operator+(const Real a, const double b) { return a + Real(b); }
__host__ __device__ inline Real operator+(const double a, const Real b) { return Real(a) + b; }
__host__ __device__ inline Real operator-(const Real a, const double b) { return a - Real(b); }
__host__ __device__ inline Real operator-(const double a, const Real b) { return Real(a) - b; }
__host__ __device__ inline Real operator*(const Real a, const double b) { return a * Real(b); }
__host__ __device__ inline Real operator*(const double a, const Real b) { return Real(a) * b; }
__host__ __device__ inline Real operator/(const Real a, const double b) { return a / Real(b); }

__host__ __device__ inline Real &operator+=(Real &a, const Real b) { a = a + b; return a; }
__host__ __device__ inline Real &operator-=(Real &a, const Real b) { a = a - b; return a; }
__host__ __device__ inline Real &operator*=(Real &a, const Real b) { a = a * b; return a; }

struct Complex {
  Real real;
  Real imag;

  __host__ __device__ Complex() : real(0.0), imag(0.0) {}
  __host__ __device__ Complex(const Real real_, const Real imag_) : real(real_), imag(imag_) {}
  __host__ __device__ Complex(const double real_, const double imag_) : real(real_), imag(imag_) {}
};

__host__ __device__ inline Complex operator-(const Complex a)
{
  return Complex(-a.real, -a.imag);
}

__host__ __device__ inline Complex operator+(const Complex a, const Complex b)
{
  return Complex(a.real + b.real, a.imag + b.imag);
}

__host__ __device__ inline Complex operator-(const Complex a, const Complex b)
{
  return a + (-b);
}

__host__ __device__ inline Complex operator*(const Complex a, const Complex b)
{
  return Complex(a.real * b.real - a.imag * b.imag,
		 a.real * b.imag + a.imag * b.real);
}

__host__ __device__ inline Complex operator*(const Real a, const Complex b)
{
  return Complex(a * b.real, a * b.imag);
}

__host__ __device__ inline Complex operator*(const Complex a, const Real b)
{
  return b * a;
}

__host__ __device__ inline Complex operator*(const double a, const Complex b)
{
  return Real(a) * b;
}

__host__ __device__ inline Complex operator*(const Complex a, const double b)
{
  return Real(b) * a;
}

__host__ __device__ inline Complex &operator+=(Complex &a, const Complex b) { a = a + b; return a; }
__host__ __device__ inline Complex &operator-=(Complex &a, const Complex b) { a = a - b; return a; }

} // namespace DoubleDouble

#endif
