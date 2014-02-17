#include<stdio.h>
#define max 10
#include<math.h>

void main ()
{
    int i ,j ,k;
    omp_set_num_threads(8);
    ___START

    --0,3==
    for(i =0 ; i <10 ; i ++)

        --1,2==
        for(j =0 ; j <10 ; j ++)

            --2,1==
            for(k =0 ; k <10 ; k ++)
                printf ("Hello") ;

    ___START

    --0,7==
    for(l =0 ; l <10 ; l ++)
    {

        --1,4==
        for(a =0 ; a <10 ; a ++)
            ;
        --1,6==
        for(m =0 ; m <10 ; m ++)

            --2,5==
            for(n =0 ; n <10 ; n ++)
                printf ("Hello") ;
    }


    ___START

    --0,10==
    for(p =0 ; p <10 ; p ++)

        --1,9==
        for(q =0 ; q <10 ; q ++)

            --2,8==
            for(r =0 ; r <10 ; r ++)
                printf ("Hello") ;


}

