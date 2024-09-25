#include <stdio.h>        //header file
void main()               //thread
{
	int f0=0,f1=1,n,i,j;            //declaration and intialisation
	printf("enter number of terms \n"); //enter terms
	scanf("%d",&n);                 //scan terms
	printf("%d,%d,",f0,f1);
	for(i=1;i<=(n-2);i++)           //for loop
	{
		j=f0+f1;                    //logic 
		f0=f1;
		f1=j;
		printf("%d,",j);	            //print
	}
}
