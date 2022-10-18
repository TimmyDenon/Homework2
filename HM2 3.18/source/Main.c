#include<stdio.h>
#include<stdlib.h>

float x;
int main()
{
	while(1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &x);
		if (x == -1)break;
		printf("Sslary is: %0.2f\n",(200+0.09*x));
	}
}