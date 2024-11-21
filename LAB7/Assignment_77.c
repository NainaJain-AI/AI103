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
	int i,temp,sum=0;                     //declaration
	i=1;                                 //intialisation
	temp=n;                              //assign n to temp
	while(n!=0)                         //while loop
	{
		i=n%10;                        //logic
		sum=sum*10+i;
		n=n/10;
		i=i+1;
	}
	if(sum==temp)                                 //contional statement
		printf("%d number is a palindrome",sum);      //print
	else
		printf("%d number is not a palindrome",temp);      //print
}
