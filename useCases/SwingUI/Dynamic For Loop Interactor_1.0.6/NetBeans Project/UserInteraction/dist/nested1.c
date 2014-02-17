#include<stdio.h>
#define max 10
#include<math.h>

void main ()
{
    int i ,j ,k;

    #pragma omp parallel for private(i)
    for(i =0 ; i <10 ; i ++)

        #pragma omp parallel for private(j)
        for(j =0 ; j <10 ; j ++)

            #pragma omp parallel for private(k)
            for(k =0 ; k <10 ; k ++)
                printf ("Hello") ;


    #pragma omp parallel for private(l)
    for(l =0 ; l <10 ; l ++)
    {

        #pragma omp parallel for private(a)
        for(a =0 ; a <10 ; a ++)
            ;
        #pragma omp parallel for private(m)
        for(m =0 ; m <10 ; m ++)

            #pragma omp parallel for private(n)
            for(n =0 ; n <10 ; n ++)
                printf ("Hello") ;
    }



    #pragma omp parallel for private(p)
    for(p =0 ; p <10 ; p ++)

        #pragma omp parallel for private(q)
        for(q =0 ; q <10 ; q ++)

            #pragma omp parallel for private(r)
            for(r =0 ; r <10 ; r ++)
                printf ("Hello") ;


}

