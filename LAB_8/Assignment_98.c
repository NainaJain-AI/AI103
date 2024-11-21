#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a[3],*b[3],i,j,*p[i],k;
	for(i=0;i<3;i++)
	p[i]=(int*)calloc(3,sizeof(int));
	for(i=0;i<3;i++)
	a[i]=(int*)malloc(3*sizeof(int));
	printf("enter a matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",(*(a+i)+j));
	   printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("\t%d",*(*(a+i)+j));
	   printf("\n");
	}
	printf("---------------------\n");
	for(i=0;i<3;i++)
	b[i]=(int*)malloc(3*sizeof(int));
	printf("enter b matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",(*(b+i)+j));
	   printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("\t%d",*(*(b+i)+j));
	   printf("\n");
	}
	printf("---------------------\n");
	printf("THE PRODUCT MATRIX IS\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
			 *(*(p+i)+j)=*(*(p+i)+j)+(*(*(a+i)+k))*(*(*(b+k)+j));	
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("\t%d",*(*(p+i)+j));
	   printf("\n");
	}
	
}
