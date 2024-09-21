#include <stdio.h>                                                 //header file
void main()                                                        //thread
{
	float math,cs,ai,eng,sst,total_marks;                         //variable declaration
	float percentage;
	printf("enter the marks\n");                                  //enter marks
	scanf("%f%f%f%f%f",&math,&cs,&ai,&eng,&sst);                   //scan marks
	total_marks=math+cs+ai+eng+sst;                                //logic for total marks
	percentage=(total_marks/500)*100;                              //logic for percentage
	
	if(percentage>=60&&percentage<=100)                            //conditonal statement
		{
		printf("you have passed with FIRST DIVISION with %f percentage",percentage);   //FIRST DIVISION 
		}
		
	else if(percentage>=50&&percentage<60)                          //conditonal statement
		{
		printf("you have passed with SECOND DIVISION with %f percentage",percentage);   //SECOND DIVISION
		}
		
	else if(percentage>=33&&percentage<50)                           //conditonal statement
		{
		printf("you have passed with THIRD DIVISION with %f percentage",percentage);    // THIRD DIVISION
		}
		
	else if(percentage<33)                                          //conditonal statement
		{
		printf("you have failed with %f percentage",percentage);   // failed 
		}
	
	else                                                           
	{
		printf("marks entered are not valid");                   //not valid
	}
}
