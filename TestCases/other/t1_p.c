#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX],b[MAX],c[MAX],i;
	for(i=0;i<MAX;i++)
		a[i]=i*10;
	for(i=0;i<MAX;i++)
		b[i]=i*10;
	for(i=0;i<MAX;i++)
		c[i]=a[i]*b[i];
	return 0;
}
