#include <stdio.h>                                                                      //header file
void main()                                                                             //thread
{
     int basic_salary,house_rent,HRA,other_allowences,income_tax,total_gross_salary;    //variable declaration
     printf("enter the amounts\n");
     scanf("%d%d%d%d%d",&basic_salary,&house_rent,&HRA,&other_allowences,&income_tax);  //scan the values
     total_gross_salary=basic_salary+house_rent+HRA+other_allowences-income_tax;        //logic
     printf("total_gross_salary=%d",total_gross_salary);                                //print the result
}
