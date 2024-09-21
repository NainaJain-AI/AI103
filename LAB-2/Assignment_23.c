#include <stdio.h>                                        //header file
void main()                                              //thread
{
int a,b,i,n=1;                                           //variable declaration
printf("enter the number\n");                            //enter the number
scanf("%d",&a);                                          //scan the number
printf("enter the power\n");                             //enter the power
scanf("%d",&b);                                          //scan the power
for(i=1;i<=b;i++)                                        //for loop
{
   n=n*a;	                                             //logic
}
printf("the value for %d to the power %d is %d",a,b,n);  //print the result
}
