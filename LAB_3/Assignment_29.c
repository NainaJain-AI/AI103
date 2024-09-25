#include <stdio.h>                              //header file
void main()                                     //thread
{
	int i,n,temp,sum=0;                 //variable declaration and initialisation
	printf("enter the number\n");       //enter number
	scanf("%d",&n);                      //scan number
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
	{
		printf("%d number is a palindrome",sum);      //print
	}
	else
	{
		printf("%d number is not a palindrome",temp);      //print
	}
}
