#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

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

int main(int argc, char* argv[]) {
  struct complex arr[5];
  struct complex_set *x;

  x = alloc_set(arr, 5);
  assert(x->num_points_in_set == 5);
  free_set(x);
  x = NULL;

  return 0;
}

struct complex_set *alloc_set(struct complex c_arr[], int size) {
    assert(size > 0);
    assert(c_arr != NULL);
    struct complex_set* newset;
    struct complex* pointarray;
    // Try and allocate memory for the set
    newset = (struct complex_set*)malloc(sizeof(struct complex_set));
    // this can fail so lets check for failiure
    if (newset == NULL) {
        return NULL;
    }
    // second we allocate the space for the array
    // using calloc to make sure stuff is zeroed out
    pointarray = (struct complex*)calloc(size, sizeof(struct complex));
    // check if this fails and if it does roll back last malloc
    if (pointarray == NULL) {
        free(newset);
        return NULL;
    }
    // populate array
    for (size_t i=0; i<size; i++) {
        pointarray[i] = c_arr[i];
    }
    newset->points = pointarray;
    newset->num_points_in_set = size;
    return newset;
}

void free_set(struct complex_set *set) {
    assert(set != NULL);
    assert(set->points != NULL);
    //first free points. otherwise we create memleaks
    free(set->points);
    // good practice to set it to NULL after freeing up
    set->points = NULL;
    // now free the set
    free(set);
}
