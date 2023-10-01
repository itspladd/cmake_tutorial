#include "MathFunctions.h"

// TODO 11 DONE: include cmath
#include <cmath>

// TODO 10 DONE: Wrap the mysqrt include in a precompiled ifdef based on USE_MYMATH
#ifdef USE_MYMATH
  #include "mysqrt.h"
#endif

namespace mathfunctions {
double sqrt(double x)
{
  // TODO 9 DONE: If USE_MYMATH is defined, use detail::mysqrt.
  #ifdef USE_MYMATH
    return detail::mysqrt(x);
  #else
  // Otherwise, use std::sqrt.
    return std::sqrt;
  #endif
}
}
