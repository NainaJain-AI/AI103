#include <stdio.h>        //header file
void main()               //thread
{
	int i,n;                           //variable declaration
	printf("enter the number\n");      //enter no.
	scanf("%d",&n);                    //scan no.
	for(i=1;i<=n;i++)                  //for loop
	{
		if(n%i==0)                     //conditional statement
		{
			printf("%d,",i);           //print factors
		}
	}
}
