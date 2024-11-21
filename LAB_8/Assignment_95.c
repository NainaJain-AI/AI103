#include <stdio.h>
int main()
{
	struct details
	{
		int   number;
		char  name[100];
		float basic_pay;
	};
	struct details employ[50];
	int n,i;
	printf("enter no of employees\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter employee number\n");
		scanf("%d",&employ[i].number);
		printf("enter employee name\n");
	    scanf("%s",employ[i].name);
		printf("enter employee basic pay\n");
	    scanf("%f",&employ[i].basic_pay);
	    printf("---------------------\n");
	}
	for(i=0;i<n;i++)
	{
		printf(" employee number");
		printf("%d\n",employ[i].number);
		printf(" employee name");
	    printf("%s\n",employ[i].name);
		printf(" employee basic pay");
	    printf("%f\n",employ[i].basic_pay);
	    printf("---------------------\n");
	}
}
