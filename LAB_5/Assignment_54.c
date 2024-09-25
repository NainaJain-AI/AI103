#include <stdio.h>
void main()
{
	int a[10],sum=0,i;
	for(i=0;i<10;i++)
	{
		printf("enter the value\n");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
}
