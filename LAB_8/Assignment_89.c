#include<stdio.h>
int main()
{
	int a[5],b[5],*aptr,i,add;
	aptr=&a;
	printf("enter array elements of array a \n");
	for(i=0;i<5;i++)
	scanf("%d",(aptr+i));

	printf("enter array elements of array b \n");
	for(i=0;i<5;i++)
	{
	b[i]=*(aptr+(4-i));
	printf("%5d",b[i]);
    }
}
