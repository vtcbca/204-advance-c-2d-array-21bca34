/* wap to create structure inventory (iid,iname,qty,rate) enter 3 inventory details and print it.
date:24-02-2022 */
#include<stdio.h>
#include<conio.h>
       struct inventory
       {
	     int iid[3],qty[3],rate[3];
	     char iname[3][30];
       };
void main()
{
       struct inventory x;
       int i;
       clrscr();
       for(i=0;i<3;i++)
       {
	     printf("\n Enter item id:");
	     scanf("%d",&x.iid[i]);
	     printf("\n Enter item name:");
	     scanf("%s",&x.iname[i]);
	     printf("\n Enter item qty:");
	     scanf("%d",&x.qty[i]);
	     printf("\n Enter item rate:");
	     scanf("%d",&x.rate[i]);
       }
       flushall();
       for(i=0;i<3;i++)
       {
	       printf("\n_______________");
	       printf("\n iid:%d",x.iid[i]);
	       printf("\n iname:%s",x.iname[i]);
	       printf("\n qty:%d",x.qty[i]);
	       printf("\n rate:%d",x.rate[i]);
       }
       getch();

}

