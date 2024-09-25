#include <stdio.h>        //header file
void main()               //thread
{
	int i,n;                                 //variable declaration
	printf("enter the number of terms\n");   //enter no. of terms you want
	scanf("%d",&n);                          //scan no. of terms
	for(i=1;i<=n;i++)                        //for loop
	{
		printf("1/%d!+",i);                  //print series
	}
}
