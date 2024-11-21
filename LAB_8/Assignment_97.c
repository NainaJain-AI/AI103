#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	char *ptr;
	int i,count=0;
	printf("enter the string\n");
	gets(st);
	ptr=st;
	for(i=0;i<strlen(st);i++)
	{
	  tolower(*(ptr+i));
	  switch(*(ptr+i))
	  {
	  	case 'a':
	  	case 'e':
	  	case 'i':
		case 'o':
		case 'u':
			     count++;  
	  }
	  	
	}
	printf("the no of vowels are %d",count);
}
