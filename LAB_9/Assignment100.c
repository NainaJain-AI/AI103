#include<stdio.h>
int main()
{
	FILE *fptr;
	char name[100];
	int i, n,marks,roll;
	printf("no of students\n");
	scanf("%d",&n);
	fptr=fopen("F:\\student.txt","w");
	while(i<n)
	{
		scanf("%d%s%d",&roll,name,&marks);
		fprintf(fptr,"%d  %s  %d\n",roll,name,marks);
		i++;
	}
	
	fclose(fptr);
}
