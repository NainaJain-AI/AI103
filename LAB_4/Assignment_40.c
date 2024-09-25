#include <stdio.h>        //header file
void main()               //thread
{
	int a,sum=0;                         //variable declaration
	do                                   //do while loop
	{
		printf("enter the number\n");    //enter  no.
		scanf("%d",&a);                  //scan no.
		sum=sum+a;                       //logic
	}while(a>0);        
	 printf("sum=%d",sum);               //print sum
}
