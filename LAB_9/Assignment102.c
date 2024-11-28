#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	int ccount=0,wcount=0,lcount=0;
	fptr=fopen("F:\\student.txt","r");
	while(ch!=EOF)
  { 
	  ch=getc(fptr);
	  if(ch=='\n'||ch==' '||ch=='\0')
	 {if(ch=='\n')
	  lcount++;
	  wcount++;
     } 
	  else
	  ccount++;
  }
      printf("%d\n",ccount-1);
      printf("%d\n",wcount-1);
	  printf("%d\n",lcount-1);
	  fclose(fptr);
}
