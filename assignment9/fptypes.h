#ifndef FPTYPES_H_
#define FPTYPES_H_

// In the following problems you will write code to implement 32 bit
// floating-point numbers and functions operating directly on the bit-level
// representation.  Your code should replicate the conventions for the IEEE
// single precision floating-point format.

#include <stdint.h>  // for fixed-width integer types

#define FRAC_BITS 23
#define EXPONENT_BITS 8
#define BIAS(a) ((1 << ((a)-1)) - 1)

/* Use the following typdef to represent your floating-point numbers: */

union encode
{
  float fl;
  uint32_t repre;
};

typedef struct float_t {
  uint8_t sign;       // use only one bit (1st lsb)
  int32_t exponent;   // use only the 8 least-significant bits
  uint64_t mantissa;  // use only the 23 least-significant bit
} float_t;

size_t get_bit_len(uint64_t val);
float fp_decode(float_t a);
float_t fp_encode(float b);
float_t fp_negate(float_t a);
float_t fp_add(float_t a, float_t b);
float_t fp_mul(float_t a, float_t b);

float_t get_Inf(void);
float_t get_NaN(void);
float_t get_1(void);
float_t get_0(void);
float_t get_smallest_denormalized(void);

#endif  // FPTYPES_H_
