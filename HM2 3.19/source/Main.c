#include<stdio.h>
#include<stdlib.h>

float x, y,z;
int main()
{
	while(1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &x);
		if (x == -1)break;
		printf("Enter interest rate: ");
		scanf("%f", &y);
		printf("Enter term of the loan in days: ");
		scanf("%f", &z);
		printf("The interest charge is $%0.2f\n\n",((z/365)*x*y));
	}
}