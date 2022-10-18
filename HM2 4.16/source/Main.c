#include<stdio.h>
#include<stdlib.h>

int x,y;
int main()
{
	scanf("%d", &x);
	//x = 10;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("--------------\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x-i; j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	printf("--------------\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
			
		}
		for (int j = 0; j < x-i; j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	printf("--------------\n");
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x-i-1; j++)
		{
			printf(" ");

		}
		for (int j = 0; j < i+1; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("--------------\n");
}