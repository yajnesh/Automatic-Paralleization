#include<stdio.h>
#include<stdlib.h>
#define N 3000
#define LIM 5
#define MAX 100

#include<omp.h>
void delay ();


int main ()
{
    int * a ,i ,sum =0;
    a =( int *)calloc (sizeof (int) ,N) ;
    if (a ==NULL)printf ("allocation failed") ,exit (2) ;
    int num_of_threads=omp_get_num_procs();
omp_set_num_threads(8);

#pragma omp parallel for private(i)
    for(i =0 ; i <N ; i ++)
        a [i] =rand () %LIM ;


#pragma omp parallel for private(i)
    for(i =0 ; i <N ; i ++)
    {
        sum =sum +a [i] ;
        delay () ;
    }


    printf ("\n Final sum = %d\n" ,sum) ;
    free (a) ;
}


void delay ()
{
    int i ,j ,k;
    float sum =0.0;

#pragma omp parallel for private(i)
    for(i =0 ; i <MAX ; i ++)

#pragma omp parallel for private(j)
        for(j =0 ; j <MAX ; j ++)

#pragma omp parallel for private(k)
            for(k =0 ; k <MAX ; k ++)
                if (k %2)
                {
                    sum +=i *j *9.77 ;
                }
                else
                {
                    sum -=i /( j +1) *7.99 ;
                }


    sum +=1.0 ;
}

