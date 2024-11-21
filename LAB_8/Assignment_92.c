#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,max,a;
   printf("enter the number of integers:\n");
   scanf("%d",&n);
   ptr=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   {
    printf("enter the %d element\n",i);
    scanf("%d",&ptr[i]);
   }
    max=0;
    for(i=0;i<n;i++)
    {
        a=ptr[i];
      if(a>max)
      max=a;
    }
    printf("MAX=%d",max);
    return 0;
}
