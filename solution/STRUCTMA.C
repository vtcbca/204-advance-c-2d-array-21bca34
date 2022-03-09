/* wap to create marksheet (sid,sname,mi,m2,m3,total,persentage) print 5 student marksheet using the concept of array of structure.
date:25-02-2022 */
#include<stdio.h>
#include<conio.h>
	struct marksheet
	{
		int sid[5],m1[5],m2[5],m3[5],total[5];
		char sname[5][30];
		float per[5];
	};
void main()
{
	struct marksheet x;
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter student id:");
		scanf("%d",&x.sid[i]);
		printf("\n Enter student name:");
		flushall();
		scanf("%s",&x.sname[i]);
		printf("\n Enter CPPM marks:");
		scanf("%d",&x.m1[i]);
		printf("\n Enter DMA marks:");
		scanf("%d",&x.m2[i]);
		printf("\n Enter CS marks:");
		scanf("%d",&x.m3[i]);
		x.total[i]=x.m1[i]+x.m2[i]+x.m3[i];
		x.per[i]=x.total[i]/3;
	}
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n________________________");
		printf("\n sid:%d",x.sid[i]);
		printf("\n sname:%s",x.sname[i]);
		printf("\n CPPM:%d",x.m1[i]);
		printf("\n DMA:%d",x.m2[i]);
		printf("\n CS:%d",x.m3[i]);
		printf("\n TOTAL:%d",x.total[i]);
		printf("\n PERSENTAGE:%f",x.per[i]);
	}
	getch();
}





