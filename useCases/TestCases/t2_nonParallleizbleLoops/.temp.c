#include<stdio.h>
#define MAX 10

#include<omp.h>
int fun ();


int main (){
 int a [MAX] [MAX] ,b [MAX] [MAX] ,c [MAX] [MAX] ,i ,j ,k;
for(j =0 ;j <MAX ;j ++)
{
 for(i =0 ;fun () ;i ++)
{
 a [i] [j] =i *10 ;
}
 if (i >MAX)break ;

}


 return 0;

}


int fun (){
 int i ,j ,k ,a [MAX] [MAX];
 int x =0;
for(i =0 ;i <MAX ;i ++)
for(j =0 ;j <MAX ;j ++)
for(k =0 ;k <MAX ;k ++)
{
 a [i] [j] =x ++ +( i +j +k) *7 ;
}


 return 10;

}

