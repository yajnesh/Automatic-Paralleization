#include<stdio.h>
#define size  800

#include<omp.h>
int a [size] [size];


int b [size] [size];


int c [size] [size];


int f ()
{
    return 1;

}


int main ()
{
    int i ,j ,k;

    #pragma omp parallel for private(i,j,k)
    for(i =0 ; i <size ;)
    {
        for(j =0 ; j <f () ; ++ j)
        {
            for(k =0 ; k <size ; ++ k)
                ;
            a [i] [j] =i +j ;
            b [i] [j] =i -j ;
            c [i] [j] =0.0f ;
        }

    }



    #pragma omp parallel for private(i,j,k)
    for(i =0 ; i <size ; i ++)
    {
        for(j =0 ; j <f () ; ++ j)
        {
            for(k =0 ; k <size ; ++ k)
                ;
            a [i] [j] =i +j ;
            b [i] [j] =i -j ;
            c [i] [j] =0.0f ;
        }

    }


    for(;;)
    {
        for(j =0 ; j <size ; ++ j)
        {
            for(k =0 ; k <f () ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }



    #pragma omp parallel for private(i,j,k)
    for(i =0 ; i <10 ; ++ i)
    {
        for(j =0 ; j <size ; ++ j)
        {
            for(k =0 ; k <100 ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }



    #pragma omp parallel for private(iiii,abc,hello)
    for(iiii =0 ; i <10 ; ++ i)
    {
        for(abc =0 ; j <size ;)
        {
            for(hello =0 ; k <100 ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }


    return 0;

}

