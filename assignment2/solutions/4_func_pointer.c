// Write a C program that has a function that
//
// - accepts a function pointer (pointing to a function with an integer return
// type and a single integer argument) and an additional array of integers and length of the array as arguments
// - invokes the pointed-to function with each of the elements in the array as an argument
// - overrides the current array element with the return value of the called function
#include <stdio.h>     // needed for the definition of NULL, printf
#include <assert.h>    // needed for the definition of assert()

// The C syntax for function pointers can be confusing.
// Read the manual (CARM); The following web page
// can also be pretty helpful:
//   http://www.newty.de/fpt/index.html

typedef int (*map_func_t)(int);

int comp(int a)
{
    if (a <= 0) return 0;
    else return 1;
}

void map(map_func_t f, int array[], int length) {
  assert(f != NULL);

  for (size_t i=0; i<length; i++) {
      array[i] = f(array[i]);
  }
}

int main(int argc, char **argv) {

  int array[] = {-1, -12 , 3};
  map(comp, array, 3);

  assert(array[0] == comp(array[0]));
  assert(array[1] == comp(array[1]));
  assert(array[2] == comp(array[2]));

  return 0;
}
