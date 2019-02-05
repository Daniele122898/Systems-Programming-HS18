----------------------
Assignment overview
----------------------

In the following problems you will write code to implement 32 bit floating-point
numbers and functions operating directly on a bit-level representation.
Your code should replicate the conventions for the IEEE single precision
floating-point format. You should be able to perform operations like
ADD, MULT, NEGATE on your floating point numbers.

For more details on the expected structure, please refer to `fptypes.h`,
and `fp-assignment.c` for implementing your version of the floating point
operators.

-------------------------
Code Skeleton overview
-------------------------

We have provided a skeleton which can be compiled and run with following
sequence of commands ::

  make
  make run

Currently all the tests are failing, and your responsibility is to make sure
that these tests pass.

Your implementation will be in form of a library (namely `fp-assignment.c`)
and the code from `test_program.c` will be using your library to test
the implementation.

We should be able to test your code by replacing `test_program.c` and
`Makefile` with our own version of the program, so please do not add any of
your functional code into `test_program.c` (you can modify it to add your own
tests).

-------------------------
Submission
-------------------------

You can submit your code by committing it to your SVN repository in a directory
named `assignment9`.  Please make sure that you commit all
the files (including `Makefile`, `test_program.c` and any header files needed).
