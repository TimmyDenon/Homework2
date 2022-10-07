#include <stdio.h>
#include <stdlib.h>

float a, b, c, d;
int x;
int main(void)
{	
	while (x!=-1)
	{
                while(true)
              {
		printf("Enter account unmber (-1 to end): "); scanf_s("%d", &x);
                while(x==(-1))break;
		printf("Enter beginning balance: "); scanf_s("%f", &a);
		printf("Enter total charges: "); scanf_s("%f", &b);
		printf("Enter total credits: "); scanf_s("%f", &c);
		printf("Enter credit limit: "); scanf_s("%f", &d);
		printf("Account: %d\n", x);
		printf("Credit limit: %0.2f\n", d);
		printf("Blance: %0.2f\n",(a+b-c));
		if (((a + b - c) > d))
		printf("Credit Limit Exceeded\n");
               }
		system("pause");
	}
	return 0;
}
