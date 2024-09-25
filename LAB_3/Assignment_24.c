#include <stdio.h>                      //header file
void main()                             //thread
{
	int n,x,Y;                           //variable declaration
	
	printf("enter the value of n=\n");    //enter value of n
	scanf("%d",&n);                       //scan value of n
	printf("enter the value of x=\n");    //enter value of x
	scanf("%d",&x);                       //scan value of x

	if(n<1)                               //conditional statement
	{
		Y=1+n*x;
		printf("value of Y is %d",Y);
	}
	else if(n==1)                         //conditional statement
	{
		Y=1+x;                             //logic
		printf("value of Y is %d",Y);      //print
	}
	else if(n==2)                         //conditional statement
	{
		Y=1+x/n;                          //logic
		printf("value of Y is %d",Y);      //print
	}
	else if(n==3)                          //conditional statement
	{
		Y=1+x*x*x;                         //logic
		printf("value of Y is %d",Y);      //print
	}
	else if(n>3)                           //conditional statement
	{
		Y=1+n*x;                           //logic
		printf("value of Y is %d",Y);      //print
	}
}

