#include<stdio.h>
#define size  150
#define MAX 10

#include<omp.h>
int a [size] [size];


int b [size] [size];


int c [size] [size];


void delay ();


int main ()
{
    int i ,j ,k;
    int num_of_threads=omp_get_num_procs();
omp_set_num_threads(8);

#pragma omp parallel for private(i,j)
    for(i =0 ; i <size ; ++ i)
    {


        for(j =0 ; j <size ; ++ j)
        {
            a [i] [j] =i +j ;
            b [i] [j] =i -j ;
            c [i] [j] =0.0f ;
        }

    }



#pragma omp parallel for private(i,j,k)
    for(i =0 ; i <size ; ++ i)
    {


        for(j =0 ; j <size ; ++ j)
        {


            for(k =0 ; k <size ; ++ k)
            {
                delay () ;
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }


    return 0;

}


void delay ()
{
    int i ,j ,k;
    float sum =0.0;

#pragma omp parallel for private(i,j,k)
    for(i =0 ; i <MAX ; i ++)


        for(j =0 ; j <MAX ; j ++)


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

