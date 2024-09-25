#include <stdio.h>
void main()
{
	int a[10],i,positive_count=0,negative_count=0,zero_count=0;
	for(i=0;i<10;i++)
	{
		printf("enter the value\n");
		scanf("%d",&a[i]);
        if(a[i]<0)
        {
        	negative_count=negative_count+1;
		}
		else if(a[i]==0)
		{
			zero_count=zero_count+1;
		}
		else
		{
			positive_count=positive_count+1;
		}
    }
    printf("no. of negative elements are %d\n",negative_count);
    printf("no. of zero elements are %d\n",zero_count);
    printf("no. of positive elements are %d\n",positive_count);
}
