#include<stdio.h>
#include<stdlib.h>

int a, b, c;
int main()
{
	for (int x = 1; x < 500; x++)
	{
		for (int y = 1; y < 500; y++)
		{
			for (int z = 1; z < 500; z++)
			{
				if ((x*x + y * y) == (z*z))
				{
					printf("%d\t%d\t%d\n", x, y, z);
				}
			}
		}
	}
}