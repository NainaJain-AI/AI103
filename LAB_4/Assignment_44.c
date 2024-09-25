#include <stdio.h>                          //header file
void main()                                 //thread
{
	float units,amount;                    //variable declaration
	printf("enter the units\n");           //enter the units
	scanf("%f",&units);                     //scan the units
	if(units<=200)                         //conditional statement_1
	{
		amount=0.5*units;                  //amount_1
	}
	else if(units>=201&&units<=400)       //conditional statement_2
	{
		amount=100+0.65*(units-200);      //amount_2
	}
	else if(units>=401&&units<=600)       //conditional statement_3
	{
		amount=230+0.80*(units-400);       //amount_3
	}
	else
	{
		amount=425+125*(units-600);         //amount_4
	}
printf("amount=%f",amount);	                //print amount
}
