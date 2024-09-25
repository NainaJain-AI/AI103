#include <stdio.h>                                         //header file 
void main()                                                //thread
{
	int n,i,f=0;                                          //variable declaration and initialisation
	printf("enter the number\n");                        //enter number
	scanf("%d",&n);                                      //scan number
	if(n==0||n==1)                                       //conditional statement
	{
		printf("the number %d is neither prime nor composite",n); //statement
	}
	else
	{
		for(i=2;i<n;i++)                    //for loop
		{
			if(n%i==0)                      //conditional statement
			{
			f=1;                            //set the flag
			}
			else
			{
			f=0;                            //reset the flag
			}
		}
		if(f==1)                            //conditional statement
		{
				printf("the number %d is not prime ",n);   //print
		}
		else
		{
				printf("the number %d is prime ",n);       //print
		}
	}
}
