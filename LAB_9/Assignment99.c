#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	int count=0;
	fptr=fopen("F:\\student.txt","r");
	while(!feof(fptr))
	{
		ch=getc(fptr);
		tolower(ch);
		switch(ch)
		{
			case'a':
			case'e':
			case'i':
			case'o':
			case'u':
			        count++;
					break;	
		}
	}
	printf("vowels=%d",count);
	fclose(fptr);
}
