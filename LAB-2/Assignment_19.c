#include <stdio.h>                                        //header file
void main()                                              //thread
{
	char ch;                                //variable declaration
	printf("enter the charcter=\n");        //enter character
	scanf("%c",&ch);                        //scan character
	if(ch>='a'&&ch<='z')                    //conditional statement
	{
		printf("%c is small case",ch);        //result
	
	}
    else                                      
    {
    	printf("%c is not small case",ch);    //result
	}
}
