#include<stdio.h>
#define MAX 10
#include<omp.h>
void fun (int a [MAX])
{
    int i ,j;
    int num_of_threads=omp_get_num_procs();
omp_set_num_threads(8);
#pragma omp parallel for private(i,j)
    for(i =0 ; i <MAX ; i ++)
    {
        for(j =0 ; j <MAX ; j ++)
        {
            a [i] =i *j ;
        }
    }
}
int main ()
{
    int a [MAX];
    fun (a) ;
    return 0;
}
