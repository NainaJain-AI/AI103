#include<stdio.h>                   //header file
int factorial(int n);                 //function declaration
int main()                          //thread
{
	int n,r,result,j;                          //declaration
	printf("enter the value of n and r\n");   //get the no.
	scanf("%d %d",&n,&r);                 //scan the no.
	result=(factorial(n)/(factorial(r)*factorial(n-r)));
	printf("the result is:%d\n",result);                     
}
int factorial(int n)                  //function defination
{

int i,f=1;                                               //varible declaration
for(i=1;i<=n;i++)                                        //for loop
	f=f*i;
	return f;                                               //logic
}
