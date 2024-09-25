#include <stdio.h>                          //header file
void main()                                //thread
{
	int i,f,n;                            //variable declaration
	printf("enter the number\n");         //enter number
	scanf("%d",&n);                       //scan number
	i=1;                                   //initialisation
	while(i<=10)                          //while loop 
	{
		f=n*i;                            //logic
		printf("%d*%d=%d\n",n,i,f);       //print
		i=i+1;                            //increment
	}
}
