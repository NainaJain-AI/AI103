#include <stdio.h>     //header file
void main()            //thread
{ 
	int num,sum=0,i,temp;   //declaration and initialisation
	printf("enter the number\n");   //enter number
	scanf("%d",&num);             //scan number
	temp=num;                     //assign num to temp
     while(num>0)                        //while loop
	{
			i=num%10;
			sum=sum+i;                        //logic
			num=num/10;
			
		if(num==0&&sum>9)                    //conditional statement
		{
			num=sum;                         //logic
			sum=0;
		}

		
	} 
	
	printf("sum of the digits of %d in single digit is %d",temp,sum);  //print result
}
