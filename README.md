Automatic Parallelizer extends gcc to Automatically convert serial code to OpenMP parallel code.

The gcc compiler source code is modified and included a separate flag (compilation option) called parallelize (invoked using gcc -parallelize *.c) that reads in a plain C file and converts it into an executable optimized for a multi-core processor.

