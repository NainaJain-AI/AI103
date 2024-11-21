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
	int i,temp,sum=0;                //declaration
	temp=n;                            //assign n to temp
	i=1;                               //intialisation
	while(n!=0)                         //while loop
	{
		i=n%10;                       //logic
		sum=sum+i*i*i;
		n=n/10;
		i=i+1;
	} 
	if(sum==temp)                      //conditional statement
		printf("the %d is amstrong number",temp);   //print
	else
		printf("the %d is not amstrong number",temp);   //print
}
