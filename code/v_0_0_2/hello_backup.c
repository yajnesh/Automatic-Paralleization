#include<stdio.h>
#define max 10
#include<math.h>
void main()
{
    int i,j;
    for(i=0; i<20; i++)
    {
        a[i]=b[i]*c[i];
        a[i]=a[i]*5;
        if(i>20)
            break;
    }
    for(i=0,k=0; i<20; i++)
    {
        for(j=0; j<10; j++)
            a[i]=a[j]*b[i];
        for(i=0;i<20;i++)
        	k++;
        for(a=0;a<10;a++)
        	for(b=0,c=0;b<10;b++)
        	{
        		a[i]=b[i]*10;
        	}	
        for(a=0;a<10;a++)
        	for(b=0;b<10;b++)
        	{
        		a[i]=b[i]*10;
        	}		    

    }
    fun();
}
void fun()
{
    int a;
}
