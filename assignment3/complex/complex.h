// This header is only gonna run if _COMPLEX_H_ has not been defined yet
// otherwise it will not compy the header into the destination file
// in case it was included multiple times.
#ifndef _COMPLEX_H_
#define _COMPLEX_H_

// This is our complex struct
struct complex {
    double real;
    double img;
};

// Adds a and b, returns the result
struct complex Add(struct complex a, struct complex b);
// Substracts b from a, returns the result
struct complex Substract(struct complex a, struct complex b);
// Multiplies a and b, returns the result
struct complex Multiply(struct complex a, struct complex b);
// Divisdes a by b, could throw an exception when dividing
// by 0. May also set the value to a float of NAN
// depending on the architecture
struct complex Divide(struct complex a, struct complex b);

#endif // _COMPLEX_H_