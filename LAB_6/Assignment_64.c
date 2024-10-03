#include <stdio.h>
void main()
{
	int a[3][3],i,j,sum1=0,sum2=0,sum3=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{
		sum1=sum1+a[0][j];
		sum2=sum2+a[1][j];
		sum3=sum3+a[2][j];
	}
     printf("sum of first row is %d\n",sum1);
     printf("sum of second row is %d\n",sum2);
     printf("sum of third row is %d\n",sum3);
 }
