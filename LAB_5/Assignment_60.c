#include <stdio.h>
void main()
{
	int n,a[n],i,MIN,j,b[n];
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value\n");
		scanf("%d",&a[i]);
	}
	MIN=a[0];
	for(j=0;j<n;j++)
	{
		for(i=1;i<(n-j);i++)
		{
			if(a[i]<MIN)
			{
				MIN=a[i];
			}
			b[j]=MIN;
		}
	}
}
	
