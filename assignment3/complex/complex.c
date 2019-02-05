#include "complex.h"

struct complex Add(struct complex a, struct complex b) {
    struct complex result;
    result.real = a.real+b.real;
    result.img = a.img + b.img;
    return result;
}

struct complex Substract(struct complex a, struct complex b) {
    struct complex result;
    result.real = a.real - b.real;
    result.img = a.img - b.img;
    return result;
}

struct complex Multiply(struct complex a, struct complex b) {
    struct complex result;
    result.real = (a.real*b.real - a.img*b.img);
    result.img = (a.real*b.img + a.img*b.real);
    return result;
}

struct complex Divide(struct complex a, struct complex b) {
    struct complex result;
    result.real = (a.real*b.real + a.img*b.img) / (b.real*b.real + b.img*b.img);
    result.img = (a.img*b.real - a.real*b.img) / (b.real*b.real + b.img*b.img);
    return result;
}