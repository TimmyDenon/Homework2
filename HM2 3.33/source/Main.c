#include<stdio.h>
#include<stdlib.h>

int x, y;
int main()
{
	printf("Enter length: ");	//ªø 
	scanf("%d", &x);
	printf("Enter breadth: ");	//¼e
	scanf("%d", &y);
	for (int i = 0; i < y; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int j = 0; j < x - 2; j++)
	{
		printf("*");
		for (int c = 0; c < y - 2; c++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (int i = 0; i < y; i++)
	{
		printf("*");
	}
}