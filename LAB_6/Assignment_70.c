#include <stdio.h>
void main()
{
	int n,a[n],i,count=0;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	printf("enter the search elelment\n");
	scanf("%d",&a[n+1]);
	for(i=1;i<=n;i++)
	{
		printf("enter the number\n");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==a[n+1])
		{
			count=count+1;
		}
	
	}
	printf("search element %d has occured %d times in the array",a[n+1],count);
}
