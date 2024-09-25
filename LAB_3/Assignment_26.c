#include <stdio.h>                            //header file
void main()                                    //thread
{
	int i,n1=0,n2=0,n;                          //variable declaration and intialisation
	printf("enter the value\n");                //enter value
	scanf("%d",&n);                             //scan value
	i=1;                                        //initialisation
	while(i<=n)                                //while loop
	{
		if(i%2==0)                             //conditional statement
		{
			n1=n1+i;                           //logic 1
		}
		else
		{
			n2=n2+i;                          //logic 2
		}
		i=i+1;                                //increment
	}
	printf("sum of %d even numbers is %d\n",n,n1);  //print
	printf("sum of %d odd numbers is %d\n",n,n2);   //print
}
