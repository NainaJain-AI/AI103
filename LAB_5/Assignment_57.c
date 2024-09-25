#include <stdio.h>
void main()
{
	int i,n,a[n],MAX,SECONDMAX;
	printf("enter tne no. of numbers\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("enter the number\n");
		scanf("%d",&a[i]);
	}
	MAX=a[1];
	SECONDMAX=a[1];
	for(i=1;i<=n;i++)
	{
	if(a[i]>MAX)
	{
		SECONDMAX=MAX;
		MAX=a[i];
	}
	else if(a[i]>SECONDMAX)
	{
		SECONDMAX=a[i];
	}
	}
	printf("MAX=%d\n",MAX);
	printf("SECONDMAX=%d",SECONDMAX);
}
