#include <stdio.h>
void main()
{
	int n,a[n],i,temp;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the value\n");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		a[i]=temp;
		a[i]=a[n+1-i];	
		a[n+1-i]=temp;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
