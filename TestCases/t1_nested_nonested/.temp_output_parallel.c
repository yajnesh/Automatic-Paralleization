#include <stdio.h>
#include <stdlib.h>
#define N     5000
#define MAX 500

#include<omp.h>
void fun (int * a);


int main (int argc ,char * argv [])
{
    int i ,j;
    int a [N] ,b [N] ,c [N] ,d [N];
    int num_of_threads=omp_get_num_procs();
omp_set_num_threads(8);

#pragma omp parallel for private(i)
    for(i =0 ; i <N ; i ++)
    {
        a [i] =i *1.5 ;
        b [i] =i +22.35 ;
        c [i] =d [i] =0.0 ;
    }



#pragma omp parallel for private(i)
    for(i =0 ; i <N ; i ++)
        c [i] =a [i] +b [i] ;


#pragma omp parallel for private(i)
    for(i =0 ; i <N ; i ++)
        d [i] =a [i] *b [i] ;


#pragma omp parallel for private(i,j)
    for(i =0 ; i <N ; i ++)


        for(j =i ; j <N ; j ++)
            d [j] =a [j] *b [j] ;

    fun (a) ;
}


void fun (int a [MAX])
{
    int i ,j;

#pragma omp parallel for private(i,j)
    for(i =0 ; i <MAX ; i ++)
    {


        for(j =0 ; j <MAX ; j ++)
        {
            a [i] =i *j ;
        }

    }



}

