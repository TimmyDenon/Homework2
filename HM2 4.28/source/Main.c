#include<stdio.h>
#include<stdlib.h>

int x,y,z,i,j;
float a,b;
int main()
{
	printf("�p�ɤuhourly workers �N��0\n");
	printf("�Ī��u�Hcommission workers �N��1\n");
	printf("�p��u�Hpieceworkers �N��2\n");
	printf("�п�J�A�����u�N��");
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
			printf("�п�J���P�`�P���B: ");
			scanf("%f", &b);
			printf("Salary is $%0.2f", (250 + (0.057*b)));
			break;
		case 2:
			printf("�п�J�P����");
			scanf("%d", &i);
			printf("�п�J�C��h�ֿ�");
			scanf("%d", &j);
			printf("Salary is $%d", (i*j));
			break;
	}	
}