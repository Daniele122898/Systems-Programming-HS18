#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

static int *randmatrix(int size) {
  int *matrix = malloc(size * size * sizeof(int));
  assert(matrix != NULL);

  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      matrix[row * size + col] = random() / (RAND_MAX / 100);
    }
  }

  return matrix;
}

static void printmatrix(int size, int *matrix, char name) {
  printf("Matrix %c:\n", name);
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      printf("%10d", matrix[row * size + col]);
    }
    printf("\n");
  }
}

static int *mmul(int size, int *A, int *B) {
  int *result = malloc(size * size * sizeof(int));
  assert(result != NULL);
  int curr = -size;
  for (int i = 0; i < size; i++) {
    curr +=size;
    for (int j = 0; j < size; j++) {
      int sum = 0;
      for (int k = 0; k < size; k++) {
        sum += A[curr + k] * B[k * size + j];
      }
      result[i * size + j] = sum;
    }
  }

  return result;
}

static unsigned cyc_hi = 0;
static unsigned cyc_lo = 0;
/* Set *hi and *lo to the high and low order bits
of the cycle counter.
*/
void access_counter(unsigned *hi, unsigned *lo)
{
  asm("rdtsc; movl %%edx,%0; movl %%eax,%1"
  : "=r" (*hi), "=r" (*lo)
  :
  : "%edx", "%eax");
}

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("USAGE: mmul <matrix_size>\n");
    return 1;
  }
  int size = atoi(argv[1]);
  //printf("SPCA Simple Matrix Multiplicator. Matrix size: %d\n", size);

  int *A = randmatrix(size);
  //printmatrix(size, A, 'A');

  int *B = randmatrix(size);
  //printmatrix(size, B, 'B');

  int *C = mmul(size, A, B);
  // the result needs to be used, otherwise C will not be computed
  // redirect the output with ./mmul 5000 > output
  printmatrix(size, C, 'C');

  free(A);
  free(B);
  free(C);

  return 0;
}
