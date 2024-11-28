#include<stdio.h>
int number(int );
int main()
{
	int t,num;
	scanf("%d",&t);
	int n[t],i;
	for(i=0;i<t;i++)
	scanf("%d",&n[i]);
	for(i=0;i<t;i++)
	{
		num=n[i];
		number(num);
	}
}
int number(int num)
{
	int temp,digit,n=0,d=0;
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		if(temp%digit==0)
		n++;
		num=num/10;
	}
	printf("%d\n",n);
}
