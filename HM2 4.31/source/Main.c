#include<stdio.h>
#include<stdlib.h>


int main()
{
	int x, y, z;
	printf("輸入菱形層數(只有奇數層)");
	scanf("%d", &z);
	z--;
	z = (z / 2) + 1;
	for (y = 1; y <= z; y++)
	{
		for (x = 1; x <= z - y; x++)
		{
			printf(" ");
		}
		for (x = 1; x <= 2 * y - 1; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (y = 1; y <= z-1; y++)
	{
		for (x = 1; x <= y; x++)
		{
			printf(" ");
		}
		for (x = 1; x <= 2 * (z - y) - 1; x++)
		{
			printf("*");
		}		
		printf("\n");
	}
	return 0;
}