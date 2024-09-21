#include <stdio.h>                             //header file
void main()                                  //thread
{
	int a,b;                                //variable declaration
	printf("enter the values\n");           //enter the values
	scanf("%d%d",&a,&b);                    //scan the values
	a=a+b;                                  //logic
	b=a-b;
	a=a-b;
	printf("a=%d\n",a);                      //result
	printf("b=%d\n",b);                     //result
	
}
