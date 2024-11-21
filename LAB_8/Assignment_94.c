#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char st1[100],st2[100];
    char *ptr;
    printf("enter the string\n");
    gets(st1);
    ptr=st1;
    n=strlen(st1);
    //printf("%c",*(ptr+1));
    for(i=0;i<n;i++)
    {
     st2[i]=*(ptr+(n-i));
	}
    printf("the orignal and reversed string is \n");
    puts(st1);
    printf("\n");
    for(i=0;i<n;i++)
    printf("%c",st2[i]);
    

}
