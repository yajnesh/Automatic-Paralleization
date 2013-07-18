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

    #pragma omp parallel for private(i)
    for(i =0 ; i <size ;)
    {
        for(j =0 ; j <f () ; ++ j)
        {

            #pragma omp parallel for private(k)
            for(k =0 ; k <size ; ++ k)
                ;
            a [i] [j] =i +j ;
            b [i] [j] =i -j ;
            c [i] [j] =0.0f ;
        }

    }



    #pragma omp parallel for private(i)
    for(i =0 ; i <size ; i ++)
    {
        for(j =0 ; j <f () ; ++ j)
        {

            #pragma omp parallel for private(k)
            for(k =0 ; k <size ; ++ k)
                ;
            a [i] [j] =i +j ;
            b [i] [j] =i -j ;
            c [i] [j] =0.0f ;
        }

    }


    for(;;)
    {

        #pragma omp parallel for private(j)
        for(j =0 ; j <size ; ++ j)
        {
            for(k =0 ; k <f () ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }



    #pragma omp parallel for private(i)
    for(i =0 ; i <10 ; ++ i)
    {

        #pragma omp parallel for private(j)
        for(j =0 ; j <size ; ++ j)
        {

            #pragma omp parallel for private(k)
            for(k =0 ; k <100 ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }



    #pragma omp parallel for private(iiii)
    for(iiii =0 ; i <10 ; ++ i)
    {

        #pragma omp parallel for private(abc)
        for(abc =0 ; j <size ;)
        {

            #pragma omp parallel for private(hello)
            for(hello =0 ; k <100 ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }


    return 0;

}

