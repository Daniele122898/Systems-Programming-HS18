/*
 * Copyright 2011 Steven Gribble
 *
 *  This file is the solution to an exercise problem posed during
 *  one of the UW CSE 333 lectures (333exercises).
 *
 *  333exercises is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  333exercises is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with 333exercises.  If not, see <http://www.gnu.org/licenses/>.
 */

// Implement alloc_set( ), free_set( )
// - alloc_set( ) needs to use malloc twice:
//   - once to allocate a new struct complex_set
//   -  once to allocate the “points” field inside it
//
// - free_set( ) needs to use free twice

#include <stdio.h>   // needed for printf()
#include <assert.h>  // needed for assert()
#include <stdlib.h>  // needed for malloc()

struct complex {
  double real;  // real component
  double imag;  // imaginary component
};

struct complex_set {
  int num_points_in_set;
  struct complex *points;             // an array of Complex
};

// here are the prototypes we need to implement
struct complex_set *alloc_set(struct complex c_arr[], int size);
void free_set(struct complex_set *set);

int main(int argc, char **argv) {
  struct complex arr[5];
  struct complex_set *x;

  x = alloc_set(arr, 5);
  assert(x->num_points_in_set == 5);
  free_set(x);
  x = NULL;

  return 0;
}

struct complex_set *alloc_set(struct complex c_arr[], int size) {
  struct complex_set *newset;
  struct complex     *pointarray;

  assert(size > 0);

  // malloc a new complex_set
  newset = malloc(sizeof(struct complex_set));
  if (newset == NULL) {
    return NULL;
  }

  // malloc the new pointarray
  pointarray = calloc(size, sizeof(struct complex));
  if (pointarray == NULL) {
    // sneaky case: free the malloc'ed struct complex_set if we fail!
    free(newset);
    return NULL;
  }
  
  // initialize the fields
  newset->points = pointarray;
  for (size_t i = 0; i < size; i++) {
    pointarray[i] = c_arr[i];
  }
  newset->num_points_in_set = size;
  return newset;
}

void free_set(struct complex_set *set) {
  // do some sanity checks
  assert(set != NULL);
  assert(set->points != NULL);

  // free the point array within the structure
  free(set->points);
  // good hygiene to set it to NULL after freeing
  set->points = NULL;
  // free the struct complex_set itself
  free(set);
}
