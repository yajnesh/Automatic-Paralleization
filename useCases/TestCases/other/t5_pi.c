#include<stdio.h>
#define MAX 10

int main()
{
	int i,j,x,a[MAX][MAX]={0};
	for(i=0;i<MAX;i++)
		for(j=0;j<fun();j++)
			for(x=0;x<10;x++)
				a[i][j]+=i+j+x;
	
	for(i=0;i<fun();i++)
		for(j=0;j<MAX;j++)
			for(x=0;x<10;x++)
				a[i][j]+=i+j+x;	
	for(i=0;i<fun();i++)
		for(j=0;j<fun();j++)
			for(x=0;x<10;x++)
				a[i][j]+=i+j+x;					
	
	printf("\nResult\n");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
			printf("%d ",a[i][j]);
		printf("\n");		
	}					 
	return 0;
}
int fun()
{
	return MAX;
}
