#include<stdio.h>                   //header file
void number(int x,int y);                 //function declaration
int main()                          //thread
{
	int x,y;                          //declaration
	printf("enter the numbers\n");   //get the no.
	scanf("%d %d",&x,&y);                 //scan the no.
	number(x,y);                      //calling of function
}
void number(int x,int y)                  //function defination
{
	x=x+y;                                  //logic
	y=x-y;
	x=x-y;
	printf("x=%d\n",x);                      //result
	printf("y=%d\n",y);                     //result
}
