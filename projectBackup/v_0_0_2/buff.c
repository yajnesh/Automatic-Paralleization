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
    int num_of_threads=omp_get_num_threads();
    omp_set_num_threads(num_of_threads);
    ___START

    --0,3==
    for(i =0 ; i <size ;)
    {

        --1,2==
        for(j =0 ; j <f () ; ++ j)
        {

            --2,1==
            for(k =0 ; k <size ; ++ k)
                ;
            a [i] [j] =i +j ;
            b [i] [j] =i -j ;
            c [i] [j] =0.0f ;
        }

    }


    ___START

    --0,6==
    for(i =0 ; i <size ; i ++)
    {

        --1,5==
        for(j =0 ; j <f () ; ++ j)
        {

            --2,4==
            for(k =0 ; k <size ; ++ k)
                ;
            a [i] [j] =i +j ;
            b [i] [j] =i -j ;
            c [i] [j] =0.0f ;
        }

    }


    ___START

    --0,9==
    for(;;)
    {

        --1,8==
        for(j =0 ; j <size ; ++ j)
        {

            --2,7==
            for(k =0 ; k <f () ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }


    ___START

    --0,12==
    for(i =0 ; i <10 ; ++ i)
    {

        --1,11==
        for(j =0 ; j <size ; ++ j)
        {

            --2,10==
            for(k =0 ; k <100 ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }


    ___START

    --0,15==
    for(iiii =0 ; i <10 ; ++ i)
    {

        --1,14==
        for(abc =0 ; j <size ;)
        {

            --2,13==
            for(hello =0 ; k <100 ; ++ k)
            {
                c [i] [j] +=a [i] [k] *b [k] [j] ;
            }

        }

    }


    return 0;

}

