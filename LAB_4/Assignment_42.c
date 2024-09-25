#include <stdio.h>        //header file
void main()               //thread
{
	int i,n,flag=1;                       //variable declaration
	printf("enter the number\n");         //enter number
	scanf("%d",&n);                       //scan number
	if(n==0||n==1)                        //conditional statement
	{
		printf(" %d is neither prime nor composite",n); //print for 0&1
	}
	for(i=2;i<=(n/2)&&flag!=0;i++)        //for loop
	{
		if(i%n==0)                        //check whether divisible or not
		{
			flag=0;                       //reset the flag
		}
	
	}
	if(flag==0)                                   //flag=0 composite
	{
		printf("%d is a composite number",n);        //print
	}
	else if(flag==1)                                //flag=1 prime
	{
			printf("%d is a prime number",n);       //print
	}
}
