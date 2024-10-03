#include <stdio.h>
void main()
{
    int n,a[n],b[n],c[2*n],i,j,temp;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of array a\n");
		scanf("%d",&a[i]);
		printf("enter the value of array b\n");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for (j=0;j<(n-i);j++)
		{
			if (a[i]>a[i+1])
			{
			   temp=a[i];
			   a[i]=a[i+1];
	           a[i+1]=temp;
			}
			if (b[i]>b[i+1])
			{
			   temp=b[i];
			   b[i]=b[i+1];
	           b[i+1]=temp;
			}
 		}
 	}
 	for(i=0;i<2*n;i++)
 	{
 		if(i<n)
 		c[i]=a[i];
 		else
 		c[i]=b[i-n];
	}
 		for(i=0;i<n;i++)
	{
		for (j=0;j<(2*n-i);j++)
		{
			if (c[i]>c[i+1])
			{
			   temp=c[i];
			   c[i]=c[i+1];
	           c[i+1]=temp;
			}
			
		}
	}
	for(i=0;i<2*n;i++)
	{
		printf("%d\t",c[i]);
	}
 	
 	
 }
			

