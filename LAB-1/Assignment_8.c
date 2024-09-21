#include <stdio.h>                                                                     //header file
void main()                                                                            //thread
{
	float s,h,m,d;                                                                  //variable declaration
	printf("enter the seconds\n");                                                 //enter seconds     
	scanf("%f",&s);                                                                //scan seconds
	
	m=s/60;																	
	h=m/60;                                                                      	//logic
	d=h/24;
	
	printf("minutes=%f\n",m);                                                      //print minutes
	        
	printf("hours=%f\n",h); 												      //print hours				
	
	printf("days=%f\n",d);														//print days		
	
}
