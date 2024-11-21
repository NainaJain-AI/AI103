#include<stdio.h>
#include<string.h>

int main()
{
	char name[50][10];
	int j,marks[10];
	while(j<10)
	{
		printf("enter the name");
		fflush(stdin);
		gets(name[j]);
		printf("enter the marks");
		scanf("%d",&marks[j]);
		j+=1;
	}
	for(j=0;j<10;j++)
	{
		if (marks[j]>500)
		printf("%s\n",name[j]);
	}
}
