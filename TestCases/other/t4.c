#include<stdio.h>
#define MAX 10
int main()
{
	int i,j,x,a[MAX][MAX]={0},sum=0;
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			sum+=i+j;
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			for(x=0;x<10;x++)
				a[i][j] += i+j+x;
	return 0;
}
