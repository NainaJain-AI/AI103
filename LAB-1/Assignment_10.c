#include <stdio.h>                                     //header file
void main()                                            //thread
{
	//WHERE CM = Cut of f mark
    //M = Marks in Mathematics out of 200
	//P = Marks in Physics out of 200
	//C = Marks in Chemistry out of 200
	//E = Marks in entrance examination out of 100
	int CM,M,P,C,E;                                    //variable declaration
	printf("enter the marks\n");                        //enter marks
	scanf("%d%d%d%d",&M,&P,&C,&E);                      //scan marks
	CM=M/2+C/2+P/2+E;                                  //logic
	printf("CM=%d",CM);                                //result
}
