#include "main.h"
/**
 * more_abers - Prints the abers 0-14 ten times.
 */
void more_abers(void)
{
	int a, count;

	for (count = 0; count <= 9; count++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
