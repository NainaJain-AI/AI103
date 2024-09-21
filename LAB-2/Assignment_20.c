#include <stdio.h>                                        //header file
void main()                                              //thread
{
int a,b;                                                
char operation;
printf("select the operator (+,-,*,/) :");
scanf("%c",&operation);
printf("enter the values \n");
scanf("%d%d",&a,&b);
switch(operation)
{
	case'+':
		printf("%d+%d=%d",a,b,a+b);
	break;
		
	case'-':
		printf("%d-%d=%d",a,b,a-b);
	break;
			
	case'*':
		printf("%d*%d=%d",a,b,a*b);
	break;
			
	case'/':
		printf("%d/%d=%d",a,b,a/b);
	break;
			
	default:
		printf("the oprator enterd is not valid");
		
}
}
