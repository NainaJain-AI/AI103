#include<stdio.h>                   //header file
int max(int n,int a[n]);                 //function declaration
int main()                          //thread
{
	int n,i,a[n],result;                          //declaration
	printf("enter the number of terms\n");   //get the no.
	scanf("%d",&n);                 //scan the no.
    for(i=1;i<=n;i++)
	{
		printf("enter the number\n");
		scanf("%d",&a[i]);
	}
	result=max(n,a[n]);
	printf("%d",result
	);
}
int max(int n,int a[n])                  //function defination
{
	int MAX,i;
	MAX=a[1];
	for(i=1;i<=n;i++)
	{
	  if(a[i]>MAX)
		MAX=a[i];
	  else
	   continue;
    }
    return MAX;
    
}
