#include<stdio.h>
#define max 10
#include<math.h>

void main ()
{
    int i ,j ,k;

    #pragma omp parallel for private(k,j,i)
    for(i =0 ; i <10 ; i ++)
        for(j =0 ; j <10 ; j ++)
            for(k =0 ; k <10 ; k ++)
                printf ("Hello") ;


    #pragma omp parallel for private(a,n,m,l)
    for(l =0 ; l <10 ; l ++)
    {
        for(a =0 ; a <10 ; a ++)
            ;
        for(m =0 ; m <10 ; m ++)
            for(n =0 ; n <10 ; n ++)
                printf ("Hello") ;
    }



    #pragma omp parallel for private(r,q,p)
    for(p =0 ; p <10 ; p ++)
        for(q =0 ; q <10 ; q ++)
            for(r =0 ; r <10 ; r ++)
                printf ("Hello") ;


}

