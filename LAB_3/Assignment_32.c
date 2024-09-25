#include <stdio.h>
void main()
{
	int n,MAX,i,a,SECONDMAX;
	printf("enter how many numbers\n");
	scanf("%d",&n);
	printf("enter the number\n");
	scanf("%d",&a);
	MAX=a;
	for(i=1;i<n;i++)
	{
		printf("enter the number\n");
		scanf("%d",&a);
		if(a>MAX)
		{
			SECONDMAX=MAX;
			MAX=a;
			
		}
		else if(a>SECONDMAX)
		{
			SECONDMAX=a;
		}
	}
	printf("the MAX number is:%d\n",MAX);
	printf("the SECOND MAX number is:%d\n",SECONDMAX);
	
	
	
}
