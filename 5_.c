#include <stdio.h>
void fibo(int );
int main()
{
	int j,t;
	scanf("%d",&t);
	int n[t],a;
	for(j=0;j<t;j++)
     scanf("%d",&n[j]);
     
    for(j=0;j<t;j++)
	 {
	 	a=n[j];
	 	fibo(a);
	 }

}
void fibo(int a)
{
	int f0=0,f1=1,i,temp;
	int flag=1;
	if(a==0||a==1)
	printf("IsFibo");
	else
	{
	for(i=1; ;i++)
	{
		temp=f0+f1;
		f0=f1;
		f1=temp;
		if(f1<=a)
		{
			if(f1==a)
			flag=1;
		}
		else
		flag=0;
	}
	if(flag==1)
	printf("IsFibo\n");
	else
	printf("IsNotFibo\n");
}
}
