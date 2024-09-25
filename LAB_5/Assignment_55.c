#include <stdio.h>
void main()
{
	int a[10],i,odd_count=0,count=0;
	for(i=0;i<10;i++)
	{
		printf("enter the value\n");
		scanf("%d",&a[i]);
		count=count+1;
		if(a[i]%2==1)
		{
			odd_count=odd_count+1;
		}
	}
	printf("no. of odd elements are:%d\n",odd_count);
	printf("total no. of elements are:%d",count);
}
