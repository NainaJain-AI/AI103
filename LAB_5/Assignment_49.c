#include <stdio.h>
void main()
{
	int i,j,k,n;
	n=5;
	for(i=1;i<=5;i++)
	{
		
		for(j=1;j<=n;j++)
		{
		   printf(" ");  	
		}
		n=n-1;
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
