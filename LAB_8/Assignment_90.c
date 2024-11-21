#include<stdio.h>
int main()
{
	char st[100],*sptr;
	int i=0,count=0,scount=0;
    gets(st);
    sptr=&st;
	while(*(sptr++)!='\0')
	{
		count=count+1;
		if(*sptr==' ')
		scount=scount+1;
		i=i+1;
	}
    
	
	printf("string length including spaces=%d\n",count);
	printf("string length excluding spaces=%d\n",count-scount);
}
