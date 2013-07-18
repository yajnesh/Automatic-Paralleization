#include<stdio.h>
#define MAX 10

#include<omp.h>
int main ()
{
    int a [MAX] [MAX] ,b [MAX] [MAX] ,c [MAX] [MAX] ,i ,j ,k;

    #pragma omp parallel for private(i)
    for(i =0 ; i <MAX ; i ++)

        #pragma omp parallel for private(j)
        for(j =0 ; j <MAX ; j ++)
            a [i] [j] =i *10 ;

    for(i =1 ,k =1 ; i <MAX ; i ++)

        #pragma omp parallel for private(j)
        for(j =0 ; j <MAX ; j ++)
            b [i] [j] =i *10 *k ;

    for(i =0 ; i <MAX ;)
        for(j =0 ; j <MAX -10 ; j ++ ,i ++)
            c [i] [j] =a [i] [j] *b [i] [j] ;

    for(i =0 ; i <fun () ; i ++)
    {

        #pragma omp parallel for private(j)
        for(j =0 ; j <MAX ; j ++)
        {
            a [i] [j] =i *10 ;
        }

    }


    return 0;

}


int fun ()
{
    return 1;

}

