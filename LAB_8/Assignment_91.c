#include<stdio.h>
int main()
{
	int n,*nptr;
	printf("enter the number:\n");
	scanf("%d",&n);
	nptr=&n;
	printf("square of %d is %d\n",*nptr,*nptr**nptr);
}
