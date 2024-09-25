#include <stdio.h>              //header file
void main()                     //thread
{
	int num,sum=0,i,temp;          //variable declaration and initialisation
	printf("enter the number\n");   //enter number
	scanf("%d",&num);                //scan number
	temp=num;                       //assign n to temp
	while(num!=0)                   //while loop
	{ 
		i=num%10;                   //logic
		sum=sum+i;
		num=num/10;
	}
	printf("sum of digits of %d is %d",temp,sum);  //print result
}
