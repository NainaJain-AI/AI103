#include <stdio.h>                                            //header file
void main()                                                   //thread
{
	char ch;                                                 //variable declaration
	printf("enter the character\n");                         //enter character
	scanf("%c",&ch);                                         //scan character
	
	    if(ch>='A'&&ch<='Z')                                //conditional statement
		{
		printf("the character %c is a capital letter",ch);   //result
		}
		
		else if(ch>='a'&&ch<='z')                           //conditional statement
		{
		printf("the character %c is a small case letter",ch);  //result
		}
		
		else if(ch>='0'&&ch<='9')                          //conditional statement
		{
		printf("the character %c is a digit",ch);          //result
		}
		
		else											
		{
		printf("the character %c is special character",ch);  //result
		}
}
