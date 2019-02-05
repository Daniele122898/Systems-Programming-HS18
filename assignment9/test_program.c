#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "fptypes.h"

/*
3) Write test_driver which contains a main() to demonstrate your implementation.
    Test cases should include different types of floating point numbers as
    operands. To simplify your life, you can assume that special values
    like ``Inf``, ``NaN`` will not be operands of the operation.  You can
    verify the answer generated by your function with the result of the same
    operation performed with C floats. Following is an example of a way to
verify
    your add function ::
*/

static bool test_fp_add(float f1, float f2) {
  bool retval = false;

  float_t v1 = fp_encode(f1);
  float_t v2 = fp_encode(f2);

  float_t ans = fp_add(v1, v2);

  float c_ans = f1 + f2;
  float m_ans = fp_decode(ans);

  if (c_ans == m_ans) {
    printf("(%f + %f = %f) == %f: PASSED\n", f1, f2, c_ans, m_ans);
    retval = true;
    return retval;
  } else {
    printf("(%f + %f = %f) != %f: FAILED\n", f1, f2, c_ans, m_ans);
    retval = false;
    return retval;
  }
  return retval;
}

static bool test_fp_mul(float f1, float f2) {
  bool retval = false;

  float_t v1 = fp_encode(f1);
  float_t v2 = fp_encode(f2);
  float_t ans = fp_mul(v1, v2);
  float m_ans = fp_decode(ans);

  float c_ans = f1 * f2;
  if (c_ans != m_ans) {
    printf("(%f * %f = %f) != %f: FAILED\n", f1, f2, c_ans, m_ans);
    retval = false;
    return retval;
  } else {
    printf("(%f * %f = %f) == %f: PASSED\n", f1, f2, c_ans, m_ans);
    retval = true;
    return retval;
  }

  return retval;
}

/*
   3) Write test_driver which contains a main() to demonstrate your
   implementation.
*/

bool test_all_mult(void) {
  test_fp_mul(8.2, 4.3);
  test_fp_mul(2348.2, 324.3422);
  return false;
}

bool test_all_add(void) {
  test_fp_add(4.2, 4.3);
  test_fp_add(3.2, 4.2);
  return false;
}

void reverse(char *x, int begin, int end)
{
   char c;
 
   if (begin >= end)
      return;
 
   c          = *(x+begin);
   *(x+begin) = *(x+end);
   *(x+end)   = c;
 
   reverse(x, ++begin, --end);
}

void print_side_by_side(float a, float_t b) {
  // first lets print a
  union encode en;
  en.fl = a;
  char fa[33];
  for (int i=0; i<32; i++) {
    if (((en.repre>>i)&1) == 1) {
      fa[i] = '1';
    } else {
      fa[i] = '0';
    }
  }
  fa[32] = '\0';
  reverse(fa, 0, strlen(fa)-1);
  // now lets print float_t
  char fb[33];
  for(int i=0; i<FRAC_BITS; i++) {
    if (((b.mantissa>>i)&1) == 1) {
      fb[i] = '1';
    } else {
      fb[i] = '0';
    }
  }

  for(int i=0; i<EXPONENT_BITS; i++) {
    if (((b.exponent>>i)&1) == 1) {
      fb[i+FRAC_BITS] = '1';
    } else {
      fb[i+FRAC_BITS] = '0';
    }
  }
  if (b.sign == 1) {
    fb[31] = '1';
  } else {
    fb[31] = '0';
  }
  fb[32] = '\0';
  reverse(fb, 0, strlen(fb)-1);

  if (strcmp(fa,fb) != 0) {
    printf("STRING ENCODING IS WRONG\n");
  } else {
    printf("STRING ENCODING CORRECT\n");
  }
}

void test_decoding(float a, float_t b) {
  // first lets print a
  union encode en;
  en.fl = a;
  char fa[33];
  for (int i=0; i<32; i++) {
    if (((en.repre>>i)&1) == 1) {
      fa[i] = '1';
    } else {
      fa[i] = '0';
    }
  }
  fa[32] = '\0';
  reverse(fa, 0, strlen(fa)-1);
  // now b
  float b2 = fp_decode(b);
  union encode en2;
  en2.fl = b2;
  char fb[33];
  for (int i=0; i<32; i++) {
    if (((en2.repre>>i)&1) == 1) {
      fb[i] = '1';
    } else {
      fb[i] = '0';
    }
  }
  fb[32] = '\0';
  reverse(fb, 0, strlen(fb)-1);
  if (strcmp(fa,fb) != 0) {
    printf("STRING DECODING IS WRONG\n");
  } else {
    printf("STRING DECODING CORRECT\n");
  }
}

void test_encoding(){
  float a = 5.3;
  float_t b = fp_encode(a);
  print_side_by_side(a,b);
  test_decoding(a,b);
}

int main() {
  test_encoding();
  test_all_mult();
  test_all_add();
  return 0;
}