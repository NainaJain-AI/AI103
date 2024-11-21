#include<stdio.h>                   //header file
void number(int n);                 //function declaration
int main()                          //thread
{
	int n;                          //declaration
	printf("enter the number\n");   //get the no.
	scanf("%d",&n);                 //scan the no.
	number(n);                      //calling of function
}
void number(int n)                  //function defination
{
	if(n%2==0)                      //conditional statement 
	printf("\n%d is even number",n);  //print if no. is even
	else
	printf("\n%d is odd number",n);   //print if no. is odd
}
