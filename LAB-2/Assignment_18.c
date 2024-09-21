#include <stdio.h>                                        //header file
void main()  
{                                            //thread
int a,b,c,max;                                          //variable declaration
	printf("enter the values\n");              
	scanf("%d%d%d",&a,&b,&c);                           //scan the values
    max= a>b?(a>c?a:c):((b>c)?b:c);                     //logic
    printf("max value is=%d",max);                      //result
    
}

