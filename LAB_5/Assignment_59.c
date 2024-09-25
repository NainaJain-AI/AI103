#include <stdio.h>
void main()
{
	int i,a[10],b[10];
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
	for(i=1;i<=10;i++)
	{
		a[i]=a[i]+b[i];
		b[i]=a[i]-b[i];
		a[i]=a[i]-b[i];
	
	}
	printf("elements of a array after swap\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("elements of b array after swap\n");
		for(i=1;i<=10;i++)
	{
	    printf("%d\t",b[i]);
	}
}
	

