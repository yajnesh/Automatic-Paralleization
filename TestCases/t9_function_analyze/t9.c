#include<stdio.h>
#define MAX 10
void fun(int a[MAX])
{
	int i,j;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			a[i]=i*j;
		}
	}
	
}
int main()
{
	int a[MAX];
	fun(a);	
	return 0;
}
