#include <stdio.h>
void main()
{
	int a[3][3],i,j,b[3][3],multi[3][3];
	printf("enter matrix a elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix b elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the multiplication matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			multi[i][j]=a[i][j]*b[i][j];
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}
}
