#include<stdio.h>
#define MAX 10
int fun()
{
	return 10;
}
int main()
{
	int a[MAX],b[MAX],c[MAX],i;
	for(i=0;i<MAX;i++)
		for(j=0;MAX;j++)
		{
			a[i]=i+j;
		}			 
	for(i=0;i<fun();i++)
		for(j=0;MAX;j++)
		{
			a[j]=i+j;
		}
	for(i=0;i<MAX;i++)
		for(j=0;MAX;j++)
		{
			a[i]+=i+j;
		}		
	return 0;
}
