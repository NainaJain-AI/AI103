#include <stdio.h>             //header file
void main()                    //thread
{
	float sales,comm;             //variable declaration
	printf("enter the sales\n");  //enter sales
	scanf("%f",&sales);           //scan sales
	if(sales<=500)                //conditional statement_1
		{
			comm=sales*0.05;      //commission_1
		}
	else if(sales>500&&sales<=2000)  //conditional statement_2
		{
			comm=35+(sales-500)*0.1;  //commission_2
		}
	else if(sales>2000&&sales<=5000)  //conditional statement_3
		{
			comm=185+(sales-2000)*0.12;  //commission_3
		}
		else                           
		{
			comm=sales*0.125;             //commission_4
		}
	printf("commission=%f",comm);       //print commission
}
