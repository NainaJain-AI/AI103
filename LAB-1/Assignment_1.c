#include <stdio.h>                //header file
void main()                      //thread
{
	float P,R,T,SI;              //variable declaration
	printf("enter the values\n");
	scanf("%f%f%f",&P,&R,&T);    //scan the values
	SI=(P*R*T)/100;             //logic
	printf("SI=%f",SI);        //print the result
}
