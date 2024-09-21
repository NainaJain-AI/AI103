#include <stdio.h>                         //header file
void main()                                //thread
{
	int h,m,s,sec;                          //variable declaration
	printf("enter the time\n");             //enter time
	scanf("%d%d%d",&h,&m,&s);               //scan time
	sec=h*3600+m*60+s;                       //logic
	printf("total seconds of time %d:%d:%d is %d",h,m,s,sec);    //result
}
