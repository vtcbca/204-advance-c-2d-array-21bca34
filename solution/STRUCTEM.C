/* wap to create structure employee (eid,ename,department,basic) and perform following operation.
1.print salary ship.
2.search employee based on id.
3.search emplopyee based on salary.
4.sort record based on salary.
5.sort record based on employee.
6.exit.
date:28-02-2022 */
#include<stdio.h>
#include<conio.h>
	struct employee
	{
		int eid[5],basic[5];
		char ename[5][30],dept[5][30];
	};
void main()
{
	struct employee x;
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter Employee Id:");
		scanf("%d",&x.eid[i]);
		printf("\n Enter Employee Name:");
		scanf("%s",&x.ename[i]);
		printf("\n Enter Employee dept:");
		scanf("%s",&x.dept[i]);
		printf("\n Enter Employee basic:");
		scanf("%d",x.basic[i]);
	}
	flushall();
	for(i=0;i<5;i++);
	{
		printf("\n_______________________");
		printf("\n eid:%d",x.eid[i]);
		printf("\n ename:%s",x.ename[i]);
		printf("\n dept:%s",x.dept[i]);
		printf("\n basic:%d",x.basic[i]);
	}
	getch();
}
