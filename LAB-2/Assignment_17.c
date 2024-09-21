#include <stdio.h>                                        //header file
void main()                                              //thread
{ 
	int a,b,c;                                          //variable declaration
	printf("enter the values\n");              
	scanf("%d%d%d",&a,&b,&c);                           //scan the values
	if(a>b&&a>c)                                       //conditional statement
	{ 
	printf("max value is a =%d",a);                     //result
	}
	if(b>a&&b>c)                                       //conditional statement
	{ 
	printf("max value is b =%d",b);                    //result
	}
	if(c>a&&c>b)                                       //conditional statement
	{ 
	printf("max value is c =%d",c);                    //result
	}
	
}
