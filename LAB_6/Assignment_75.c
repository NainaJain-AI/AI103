#include<stdio.h>
int main()
{
	int student[4][4],total_marks[4],i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
          switch(j)
		  {
		  	case 0: printf("enter the roll no of student\n");
		            scanf("%d",&student[i][0]);
		            break;
		    case 1: printf("enter marks of sub1\n");  
					scanf("%d",&student[i][1]);  
					break; 
			case 2: printf("enter marks of sub2\n");  
					scanf("%d",&student[i][2]);  
					break; 
			case 3: printf("enter marks of sub3\n");  
					scanf("%d",&student[i][3]);  
					break; 				
		  }		
		}
	}
		for(i=0;i<4;i++)
		{
			total_marks[i]=student[i][1]+student[i][2]+student[i][3];
			printf("total marks of roll no %d is:%d\n",student[i][0],total_marks[i]);
		}
		for(j=1;j<4;j++)
		{
			int rmax,max[3];
			for(i=0;i<4;i++)
			{
				max[j]=student[0][j];
				if(student[i][j]>max[j])
				{
					max[j]=student[i][j];
					rmax=student[i][0];
				}
			}
			printf("highest marks in sub%d is of roll no %d is: %d\n",j,rmax,max[j]);
		}
		int Rmax,tmax;
		tmax=total_marks[0];
		for(i=0;i<4;i++)
		{ 
		  if(total_marks[i]>tmax)
		  {
		  	tmax=total_marks[i];
		  	Rmax=student[i][0];
		  }
		}
		printf("highest total marks is of roll no %d is: %d\n",Rmax,tmax);
	}

