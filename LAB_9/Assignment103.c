#include <stdio.h>
#define macro(x,y)(x>y?x:y)
int main()
{
	int a,b;
	printf("enter number1\n");
	scanf("%d",&a);
	printf("enter number2\n");
	scanf("%d",&b);
	printf("maximum number%d\n",macro(a,b));
}
