#include<stdio.h>
#include<stdlib.h>

int x,y,z,i,j;
float a,b;
int main()
{
	printf("小時工hourly workers 代號0\n");
	printf("傭金工人commission workers 代號1\n");
	printf("計件工人pieceworkers 代號2\n");
	printf("請輸入你的員工代號");
	scanf("%d", &z);
	switch (z)
	{
		case 0:
		printf("Enter # of hours worked (-1 to end): ");
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &x);
		if (x == -1)break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &a);
		(x > 40) ? printf("Salary is $%0.2f\n\n", ((x - 40)*0.5*a + x * a)) : printf("Salary is $%0.2f\n\n", (x * a));
		break;
		case 1:
			printf("請輸入本周總銷售額: ");
			scanf("%f", &b);
			printf("Salary is $%0.2f", (250 + (0.057*b)));
			break;
		case 2:
			printf("請輸入銷售件數");
			scanf("%d", &i);
			printf("請輸入每件多少錢");
			scanf("%d", &j);
			printf("Salary is $%d", (i*j));
			break;
	}	
}