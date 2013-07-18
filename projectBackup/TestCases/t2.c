#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],i,j,k;
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			a[i][j]=i*10;
			
	for(i=1,k=1;i<MAX;i++)
		for(j=0;j<MAX;j++)
			b[i][j]=i*10*k;
			
	for(i=0;i<MAX;)
		for(j=0;j<MAX-10;j++,i++)
			c[i][j]=a[i][j]*b[i][j];
	
	for(i=0;1;i++)
	{
		for(j=0;j<MAX;j++)
		{
			a[i][j]=i*10;	
		}	
		if(i>MAX)
				break;
	}		
			
			 
	return 0;
}
