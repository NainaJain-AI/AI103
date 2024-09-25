#include <stdio.h>
void main()
{
	int i,a[10],b[10],sum[10];
	printf("elements of a array\n");
	for(i=1;i<=10;i++)
	{
		printf("enter the number\n");
		scanf("%d",&a[i]);
	}
	
	printf("elements of b array\n");
		for(i=1;i<=10;i++)
	{
		printf("enter the number\n");
		scanf("%d",&b[i]);
	}
	
	printf("elements of sum array\n");
		for(i=1;i<=10;i++)
	{
	
		sum[i]=a[i]+b[i];
		printf("%d\t",sum[i]);
	}
}
