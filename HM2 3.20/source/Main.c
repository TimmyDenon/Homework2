#include<stdio.h>
#include<stdlib.h>

int x;
float y;
int main()
{
	while(1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &x);
		if (x == -1)break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &y);
		(x > 40) ? printf("Salary is $%0.2f\n\n", ((x - 40)*0.5*y + x * y)) : printf("Salary is $%0.2f\n\n",(x * y));
	}
}