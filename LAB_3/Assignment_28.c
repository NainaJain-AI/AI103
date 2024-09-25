#include <stdio.h>                                //header file
void main()                                       //thread
{  
	int n,i,temp,sum=0;                  //variable declaration and initialisation
	printf("enter the number\n");       //enter number
	scanf("%d",&n);                    //scan number
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
	{
		printf("the %d is amstrong number",temp);   //print
	}
	else
	{
		printf("the %d is not amstrong number",temp);   //print
	}
}
