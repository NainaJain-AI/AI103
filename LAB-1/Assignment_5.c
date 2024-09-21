#include <stdio.h>                                        //header file
void main()                                              //thread
{
	int a,b,c;                 
	printf("enter the values\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("value of a=%d\n",a);
	printf("value of b=%d\n",b);
}
