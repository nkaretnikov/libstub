// float.h - floating types
// #include <float.h>

/*
The rounding mode for floating-point addition is characterized by the
implementation-defined value of FLT_ROUNDS:
  -1
      Indeterminable.
  0
      Toward zero.
  1
      To nearest.
  2
      Toward positive infinity.
  3
      Toward negative infinity.
All other values for FLT_ROUNDS characterize implementation-defined
rounding behavior.
*/
#define FLT_ROUNDS 1

/*
The values of operations with floating operands and values subject to
the usual arithmetic conversions and of floating constants are
evaluated to a format whose range and precision may be greater than
required by the type. The use of evaluation formats is characterized
by the implementation-defined value of FLT_EVAL_METHOD:
  -1
      Indeterminable.
  0
      Evaluate all operations and constants just to the range and
      precision of the type.
  1
      Evaluate operations and constants of type float and double to
      the range and precision of the double type; evaluate long
      double operations and constants to the range and precision of
      the long double type.
  2
      Evaluate all operations and constants to the range and
      precision of the long double type.
All other negative values for FLT_EVAL_METHOD characterize
implementation-defined behavior.
*/
#define FLT_EVAL_METHOD 0

/*
The <float.h> header shall define the following values as constant
expressions with implementation-defined values that are greater or
equal in magnitude (absolute value) to those shown, with the same
sign.
*/
// Radix of exponent representation, b.
#define FLT_RADIX 2

// Number of base-FLT_RADIX digits in the floating-point
// significand, p.
#define FLT_MANT_DIG  24
#define DBL_MANT_DIG  53
#define LDBL_MANT_DIG 64

/*
Number of decimal digits, n, such that any floating-point
number in the widest supported floating type with pmax radix b
digits can be rounded to a floating-point number with n decimal
digits and back again without change to the value.
*/
#define DECIMAL_DIG 21

/*
Number of decimal digits, q, such that any floating-point
number with q decimal digits can be rounded into a floating-
point number with p radix b digits and back again without
change to the q decimal digits.
*/
#define FLT_DIG  6
#define DBL_DIG  15
#define LDBL_DIG 18

/*
Minimum negative integer such that FLT_RADIX raised to that
power minus 1 is a normalized floating-point number, emin.
*/
#define FLT_MIN_EXP  (-125)
#define DBL_MIN_EXP  (-1021)
#define LDBL_MIN_EXP (-16381)

/*
Minimum negative integer such that 10 raised to that power is
in the range of normalized floating-point numbers.
*/
#define FLT_MIN_10_EXP  (-37)
#define DBL_MIN_10_EXP  (-307)
#define LDBL_MIN_10_EXP (-4931)

/*
Maximum integer such that FLT_RADIX raised to that power minus
1 is a representable finite floating-point number, emax.
*/
#define FLT_MAX_EXP  128
#define DBL_MAX_EXP  1024
#define LDBL_MAX_EXP 16384

/*
CX: Additionally, FLT_MAX_EXP shall be at
least as large as FLT_MANT_DIG, DBL_MAX_EXP shall be at least
as large as DBL_MANT_DIG, and LDBL_MAX_EXP shall be at least as
large as LDBL_MANT_DIG; which has the effect that FLT_MAX,
DBL_MAX, and LDBL_MAX are integral.
*/

/*
Maximum integer such that 10 raised to that power is in the
range of representable finite floating-point numbers.
*/

#define FLT_MAX_10_EXP  38
#define DBL_MAX_10_EXP  308
#define LDBL_MAX_10_EXP 4932

/*
The <float.h> header shall define the following values as constant
expressions with implementation-defined values that are greater than
or equal to those shown:
*/

// Maximum representable finite floating-point number.
#define FLT_MAX  3.40282347e+38F
#define DBL_MAX  1.7976931348623157e+308
#define LDBL_MAX 1.18973149535723176502e+4932L

/*
The <float.h> header shall define the following values as constant
expressions with implementation-defined (positive) values that are
less than or equal to those shown:
*/

// The difference between 1 and the least value greater than 1
// that is representable in the given floating-point type, b1-p.
#define FLT_EPSILON  1.19209290e-7F
#define DBL_EPSILON  2.2204460492503131e-16
#define LDBL_EPSILON 1.08420217248550443401e-19L

// Minimum normalized positive floating-point number, bemin-1.
#define FLT_MIN  1.17549435e-38F
#define DBL_MIN  2.2250738585072014e-308
#define LDBL_MIN 3.36210314311209350626e-4932L

/*
All known hardware floating-point formats satisfy the property that
the exponent range is larger than the number of mantissa digits. The
ISO C standard permits a floating-point format where this property is
not true, such that the largest finite value would not be integral;
however, it is unlikely that there will ever be hardware support for
such a floating-point format, and it introduces boundary cases that
portable programs should not have to be concerned with (for example,
a non-integral DBL_MAX means that ceil() would have to worry about
overflow). Therefore, this standard imposes an additional requirement
that the largest representable finite value is integral.
*/
