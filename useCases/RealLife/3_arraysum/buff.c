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
    omp_set_num_threads(num_of_threads);
    ___START

    --0,1==
    for(i =0 ; i <N ; i ++)
        a [i] =rand () %LIM ;

    ___START

    --0,2==
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
    ___START

    --0,5==
    for(i =0 ; i <MAX ; i ++)

        --1,4==
        for(j =0 ; j <MAX ; j ++)

            --2,3==
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

