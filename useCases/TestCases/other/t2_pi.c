#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],i,j;
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			a[i][j]=i*10;
			
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			b[i][j]=i*10;
			
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			c[i][j]=a[i][j]*b[i][j];
			
	printf("\nResult\n");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
			printf("%d ",c[i][j]);
		printf("\n");		
	}			 
	return 0;
}
