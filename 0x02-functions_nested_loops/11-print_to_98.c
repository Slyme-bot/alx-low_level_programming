#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from input to 98
 * @x: Number to start with
 */
void print_to_98(int x)
{
	if (x >= 98)
	{
		while (x > 98)
			printf("%d, ", x--);
		printf("%d\n", x);
	}

	else
	{
		while (x < 98)
			printf("%d, ", x++);
		printf("%d\n", x);
	}
}
