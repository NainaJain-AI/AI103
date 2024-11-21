#include<stdio.h>
int book(int );
int main()
{
	int n;
	printf("enter the serial no\n");
	scanf("%d",n);
	book(n);
}
int book(int n)
{
	int pages,edition,publicationyear;
	char title[100],author[100];
	printf("enter the tile of book");
	scanf("%s",title);
	printf("enter the author of book");
	scanf("%s",author);
	printf("enter the total pages of book");
	scanf("%d",&pages);
	printf("enter the edition of book");
	scanf("%d",&edition);
	printf("enter the publication year of book");
	scanf("%d",&publicationyear);
	printf("the information of book of serial no %d is:\n");
	printf(" the title of %d book is %s",n,title);
	printf(" the author of %d book is %s",n,author);
	printf(" the total pages of %d book is %d",n,pages);
	printf(" the edition of %d book is %d",n,edition);
	printf(" the publication year  of %d book is %s",n,publicationyear);
}
