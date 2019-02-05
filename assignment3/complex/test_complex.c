#include<stdio.h>
#include "complex.h"

int main(int argc, char* argv[]) {
    struct complex a = {10,10};
    struct complex b = {5,5};
    struct complex result = Add(a,b);
    printf("result.real: %f\n",result.real);
    printf("result.img: %f\n",result.img);
}