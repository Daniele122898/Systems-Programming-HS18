#include<stdio.h>
#include<assert.h>

typedef int (*map_func_t)(int);

void fnct(map_func_t f, int arr[], int length) {
    assert(f!= NULL);

    for (size_t i=0; i<length; i++) {
        arr[i] = f(arr[i]);
    }
}

int comp(int a)
{
    if (a <= 0) return 0;
    else return 1;
}

void print_array(int arr[], int length) {
    for (int i=0; i<length; i++) {
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

int main(int argc, char** argv) {
    int arr[3] = {-1, 3, -27};
    fnct(comp, arr, 3);
    print_array(arr, 3);
}