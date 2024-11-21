#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i;
    char st[100];
    char *ptr;
    printf("enter the string\n");
    gets(st);
    ptr=st;
    for(i=0;i<(strlen(st));i++)
    {
        if(*(ptr+i)==' '||*(ptr+i)=='\0')
        count++;
    }
    printf("the no of words is %d",count);

    return 0;
}
