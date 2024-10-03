#include <stdio.h>
void main()
{
    int n,a[n],i,j,temp;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value\n");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for (j=0;j<(n-i);j++)
		{
			if (a[i]>a[i+1])
			{
			   temp=a[i];
			   a[i]=a[i+1];
	           a[i+1]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
