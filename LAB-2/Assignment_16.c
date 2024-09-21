#include <stdio.h>                                        //header file
void main()                                              //thread
{
     int a,b,c;                                          //variable declaration
	printf("enter the values\n");              
	scanf("%d%d%d",&a,&b,&c);                           //scan the values
	if(a>b)                                             //conditional statement
	{
		if(a>c)                                          //conditional statement
		{
			printf("max value is a =%d",a);              //result
		}
		else                                             
		{
			printf("max value is c =%d",c);             //result
		}
	}
	else
	{
		if(b>c)                                          //conditional statement
		{
				printf("max value is b =%d",b);         //result
		}
		else
		{
				printf("max value is c =%d",c);           //result
		}
	}
}
