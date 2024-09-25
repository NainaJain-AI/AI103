#include <stdio.h>
void main()
{
	int n,MAX,i,a,MIN;
	printf("enter how many numbers\n");
	scanf("%d",&n);
	printf("enter the number\n");
	scanf("%d",&a);
	MAX=a;
	MIN=a;
	for(i=1;i<n;i++)
	{
		printf("enter the number\n");
		scanf("%d",&a);
		if(a>MAX)
		{
			MAX=a;
		}
		if(a<MIN)
		{
			MIN=a;
		}
	}
	printf("the MAX number is:%d\n",MAX);
	printf("the MIN number is:%d\n",MIN);
}
