#include<stdio.h>
#define MAX 10000
int main()
{
	int a[MAX+10],b[MAX+10],c[MAX+10],i;
	for(i=0;i<MAX;i++)
		a[i]=i*10;
	for(i=0;i<MAX;i++)
		b[i]=i*10;
	for(i=0;i<MAX;i++)
		c[i]=a[i]*b[i];
	
	for(i=0;i<MAX+1;i++)
		a[i]=i*100;
	for(i=0;i<MAX+1;i++)
		b[i]=i*10;
	for(i=0;i<MAX+1;i++)
		c[i]=a[i]*b[i];
	
	for(i=0;i<MAX+2;i++)
		a[i]=i*1;
	for(i=0;i<MAX+2;i++)
		b[i]=i*10;
	for(i=0;i<MAX+2;i++)
		c[i]=a[i]*b[i];
	
	for(i=0;i<MAX+3;i++)
		a[i]=i*20;
	for(i=0;i<MAX+3;i++)
		b[i]=i*10;
	for(i=0;i<MAX+3;i++)
		c[i]=a[i]*b[i];
	
	for(i=0;i<MAX+4;i++)
		a[i]=i*30;
	for(i=0;i<MAX+4;i++)
		b[i]=i*10;
	for(i=0;i<MAX+4;i++)
		c[i]=a[i]*b[i];
	
	for(i=0;i<MAX+5;i++)
		a[i]=i*40;
	for(i=0;i<MAX+5;i++)
		b[i]=i*10;
	for(i=0;i<MAX+5;i++)
		c[i]=a[i]*b[i];				
			 
	return 0;
}
