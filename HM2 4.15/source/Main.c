#include<stdio.h>
#include<stdlib.h>


int main()
{
	for (float i = 0.1; i <= 0.12; i = i + 0.005)
	{
		printf("%f\n", (5000 *i));
	}
}