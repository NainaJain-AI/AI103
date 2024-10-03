#include <stdio.h>
void main()
{
	int n,a[n],i,flag=1;
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
			flag=0;
		}
	
	}
	if(flag==0)
	printf("yes, the given element is present");
	else
	printf("no, the given element is not present");
}
