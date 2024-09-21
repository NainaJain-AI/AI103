#include <stdio.h>                                        //header file
void main()                                              //thread
{
int n,i,f;                                               //varible declaration
printf("enter the number\n");                            //enter the number
scanf("%d",&n);                                          //scan the number
for(i=1;i<=n;i++)                                        //for loop
{
	f=f*i;                                               //logic
}
printf("factorial of %d is %d",n,f);                    //print the result
}
