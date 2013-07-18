#include<stdio.h>
#define MAX 10000
#include<omp.h>
int main ()
{
    int a [MAX +10] ,b [MAX +10] ,c [MAX +10] ,i;
    int num_of_threads=omp_get_num_procs();
omp_set_num_threads(8);
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX ; i ++)
        a [i] =i *10 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX ; i ++)
        b [i] =i *10 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX ; i ++)
        c [i] =a [i] *b [i] ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +1 ; i ++)
        a [i] =i *100 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +1 ; i ++)
        b [i] =i *10 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +1 ; i ++)
        c [i] =a [i] *b [i] ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +2 ; i ++)
        a [i] =i *1 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +2 ; i ++)
        b [i] =i *10 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +2 ; i ++)
        c [i] =a [i] *b [i] ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +3 ; i ++)
        a [i] =i *20 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +3 ; i ++)
        b [i] =i *10 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +3 ; i ++)
        c [i] =a [i] *b [i] ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +4 ; i ++)
        a [i] =i *30 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +4 ; i ++)
        b [i] =i *10 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +4 ; i ++)
        c [i] =a [i] *b [i] ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +5 ; i ++)
        a [i] =i *40 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +5 ; i ++)
        b [i] =i *10 ;
#pragma omp parallel for private(i)
    for(i =0 ; i <MAX +5 ; i ++)
        c [i] =a [i] *b [i] ;
    return 0;
}
