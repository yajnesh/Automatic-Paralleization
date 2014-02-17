# include <stdlib.h>
# include <stdio.h>
#define n 60000

#include<omp.h>
int main ()
{
    int i;
    int j;
    int prime;
    int total =0;

    #pragma omp parallel for private(i,j) reduction ( + : total )
    for(i =2 ; i <=n ; i ++)
    {
        prime =1 ;
        for(j =2 ; j <i ; j ++)
        {
            if (( i %j ==0) &&prime)
            {
                prime =0 ;
            }

        }
        total =total +prime ;
    }


    printf ("\n Total primes between 1 and %d are %d\n" ,n ,total) ;
    return 0;

}

