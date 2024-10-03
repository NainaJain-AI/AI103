#include <stdio.h>
void main()
{
	int a[3][3],i,j,MAX,MIN;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	MAX=a[0][0];
	MIN=a[0][0];
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>MAX)
			{
				MAX=a[i][j];
			}
			if(a[i][j]<MIN)
			{
				MIN=a[i][j];
			}
		}
	}
	printf("MAX element=%d",MAX);
	printf("\nMIN element=%d",MIN);
}
