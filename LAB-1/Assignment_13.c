#include <stdio.h>            //header file
void main()                   //thread
{
	int n;                           //variable declaration
	printf("enter the number\n");    //enter number
	scanf("%d",&n);                 //scan number
	if(n%2==0)                      //conditional statement
	{
		printf("the number %d is even",n);   //result for even
	}
	if(n%2==1)                         //conditional statement
	{
		printf("the number %d is odd",n);  //result for odd
	}
}
