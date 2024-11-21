#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	printf("enter the character\n");
	c=getchar();
	if(isupper(c))
	 c=tolower(c);
	switch(c)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		        printf("\ncharacter is vowel\n",c);
				break;
		default:
		        printf("\ncharacter is not vowel\n",c);			
	}
}
