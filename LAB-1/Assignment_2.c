#include <stdio.h>                                        //header file
void main()                                              //thread
{  
   float math,hindi,eng,sst,cs,total_marks,percentage;   //variable declaration
   printf("enter the marks \n");
   scanf("%f%f%f%f%f",&math,&hindi,&eng,&sst,&cs);     //scan the values
   total_marks= math+hindi+eng+sst+cs;                 //logic for total marks
   percentage=(total_marks/500)*100;
   printf("total_marks=%f\n",total_marks);              //print the result total marks
   printf("percentage=%f\n",percentage);               // print the result percentage
    
}
