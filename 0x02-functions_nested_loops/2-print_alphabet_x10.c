#include "main.h"
/**
 * print_alphabet_x10 - Prints the output 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char lower;

	while (count <= 9)
	{
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
	count++;
	}
}
