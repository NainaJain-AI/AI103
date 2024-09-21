#include <stdio.h>                             //header file
void main()    									//thread
{
	int s,h,m,sec;								//variable declaration
	printf("enter the seconds\n");              //enter seconds
	scanf("%d",&sec);                           //scan seconds

	h=sec/3600;
	m=(sec-h*3600)/60;                          //logic
	s=sec-h*3600-m*60;
	
	printf("the time is %d:%d:%d",h,m,s);       //result
	
}
