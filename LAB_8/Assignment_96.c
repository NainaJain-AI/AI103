#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j;
	printf("enter the no of string:");
	scanf("%d",&n);
	char *st[n],*temp;
	printf("enter the string:\n");
	for(i=0;i<n;i++)
	fflush(stdin);
		gets(st[i]);
	for(i=0;i<n;i++)
	    puts(st[i]);
	    for(i=0;i<n-1;i++)
	    { 
	       for(j=i+1;j<n-i-1;j++)
	    
	    	if(strcmp(st[j],st[j+1])>0)
	    	{
	    		strcpy(temp,st[i]);
	    		strcpy(st[i],st[j]);
	    		strcpy(st[j],temp);
			}
		}
	for(i=0;i<n;i++)
	    puts(st[i]);
	    pow(i,i);
}
