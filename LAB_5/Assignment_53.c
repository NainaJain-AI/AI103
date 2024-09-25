#include <stdio.h>
void main()
{
	int i,j,k,n;
	n=4;
	for(i=1;i<=7;i++)
	{
	if(i>4)
	{
		n=n+1;
			for(j=1;j<=n;j++)
	    { 
		   printf(" ");  	
		}
		
		for(k=1;k<=15-i*2;k++)
		{
			printf("*");
		}
	}
	else
	{
		
		for(j=1;j<=n;j++)
		{
		   printf(" ");  	
		}
		n=n-1;
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
	}
	
		printf("\n");
	}
}
