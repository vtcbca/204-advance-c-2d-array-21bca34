/*wap a program to create to 3*3 mattrix and check it is diogonol mattrix or not.
date:21-02-2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
     int m[3][3],i,j,c=0,s=0;
     clrscr();
     for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	  {
	      printf("\n Enter value for m[%d][%d]:",i,j);
	      scanf("%d",&m[i][j]);
	  }
     }
     clrscr();
     printf("mattrix:\n");
     for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	  {
	      printf("%d\t",m[i][j]);
	  }
	  printf("\n");
     }
     for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	  {
	       if(i==j)
	       {
		    if(i>0 &&j<0)
		    c=1;
	       }
	       if(i!=j)
	       {
		    if(m[i][j]==0)
		    s=1;
	       }
	  }
     }
     if(c==1 && s==1)
	  printf("\n mattrix is diogonol mattrix");
     else
	  printf("\n mattrix is not diogonol mattrix");
     getch();
}