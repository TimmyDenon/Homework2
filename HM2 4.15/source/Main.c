#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float i;
	for ( i = 0.1; i <= 0.12; i = i + 0.005)
	{
		for (int years = 1; years <= 15; years++)
		{
			printf("years %d \trate %f \t amount %1f\n", years, i, (5000 * pow((1.0 + i), years)));
		}
		printf("\n");
	}
	
}