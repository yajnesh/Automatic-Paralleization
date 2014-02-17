#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 100

#include<omp.h>
void delay ();


int main ()
{
    int n =13 ,x ,k ,l ,y;
    int size =pow (2 ,n);
    int ans [size] [n];
    memset (ans ,0 ,sizeof ( ans)) ;
    int num_of_threads=omp_get_num_threads();
    omp_set_num_threads(num_of_threads);
    ___START

    --0,1==
    for(x =1 ; x <size ; x ++)
    {
        k =x ;
        l =0 ;
        while (k !=0)
        {
            if (k &1)
            {
                ans [x] [l] =1 ;
            }
            k >>=1 ;
            l ++ ;
        }
        delay () ;
    }



}


void delay ()
{
    int i ,j ,k;
    float sum =0.0;
    ___START

    --0,4==
    for(i =0 ; i <MAX ; i ++)

        --1,3==
        for(j =0 ; j <MAX ; j ++)

            --2,2==
            for(k =0 ; k <MAX ; k ++)
            {
                if (k %2)
                {
                    sum +=i *j *9.77 ;
                }
                else
                {
                    sum -=i /( j +1) *7.99 ;
                }

            }


    sum +=1.0 ;
}

