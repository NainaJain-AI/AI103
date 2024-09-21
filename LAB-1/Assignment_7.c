#include <stdio.h>                                             //header file
void main()                                                    //thread
{
	float b,h,A;                                              //variable declaration
	printf("enter base and height of the triangle\n");        //enter base and height
	scanf("%f%f",&b,&h);                                       //scan base and height
	A=(b*h)/2;                  							//logic
	printf("the area of the triangle is %f",A);             //result
}
