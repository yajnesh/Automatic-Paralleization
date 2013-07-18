#include<stdio.h>
#define MAX 1000
int a[MAX];
int fun()
{
	int i,j,k;
	float x=0.0;
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			for(k=0;k<MAX;k++)
			{
				a[i]=x++ + (i+j+k)*7.0;
			}
	return 10;
}
int main()
{
	int i,j;
	fun();
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
		{
			a[i]=i+j;
		}			 
	for(i=0;i<fun();i++)
		for(j=0;j<MAX;j++)
		{
			a[j]=i+j;
		}
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
		{
			a[i]+=i+j;
		}		
	return 0;
}
