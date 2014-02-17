#include <stdio.h>
#include <stdlib.h>
#define N     50

int main (int argc, char *argv[])
{
    int i, nthreads, tid;
    float a[N], b[N], c[N], d[N];


    for (i=0; i<N; i++) {
        a[i] = i * 1.5;
        b[i] = i + 22.35;
        c[i] = d[i] = 0.0;
    }
    for (i=0; i<N; i++)
    {
        c[i] = a[i] + b[i];

    }

    for (i=0; i<N; i++)
    {
        d[i] = a[i] * b[i];
       
    }



}

