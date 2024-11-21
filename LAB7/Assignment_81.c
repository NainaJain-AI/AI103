#include<stdio.h>                   //header file
int number(int n);                 //function declaration
int main()                          //thread
{
	int n;                          //declaration
	printf("enter the number\n");   //get the no.
	scanf("%d",&n);                 //scan the no.
	int f=number(n);                      //calling of function
	printf("%d",f);                      //print the value of f
}
int number(int n)                  //function defination
{
	int i,f=0;
if(n==0||n==1)                                       //conditional statement
		printf("the number %d is neither prime nor composite",n); //statement
	else
	{
		for(i=2;i<n;i++)                    //for loop
		{
			if(n%i==0)                      //conditional statement
			f=0;                            //set the flag
			else
			f=1;                            //reset the flag
		}
	}
	return f;
}
