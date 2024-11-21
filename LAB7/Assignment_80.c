#include<stdio.h>                   //header file
void fibonacci(int n);                 //function declaration
int main()                          //thread
{
	int n;                          //declaration
	printf("enter the no. of terms\n");   //get the no.
	scanf("%d",&n);                 //scan the no.
	fibonacci(n);                //calling of function
}
void fibonacci(int n)                  //function defination
{
	int f0=0,f1=1,i,j;
printf("%d,%d,",f0,f1);
	for(i=1;i<=(n-2);i++)           //for loop
	{
		j=f0+f1;                    //logic 
		f0=f1;
		f1=j;
		printf("%d,",j);	            //print
	}
}
