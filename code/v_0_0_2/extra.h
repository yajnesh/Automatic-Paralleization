#include<string.h>
#include<stdlib.h>
#include<stdio.h>

char *my_strdup(char *str)
{
	char *ptr=(char *) malloc(sizeof(char)*(strlen(str)+1));
	int i;
	if(!ptr)
	{
		printf("\nmy_strdup() function failed\n");
		exit(0);
	}
	for(i=0;str[i];i++)
		ptr[i]=str[i];
	ptr[i]='\0';
	return ptr;	
}

struct for_loop
{
	char *whole;//contains the whole for loop contents, init,cond,incr and body...
	char *init;//contains only initialise statement in for loop, eg: for(i=0;i<10;i++) then init contains "i=0;"
}stack_for[10];
