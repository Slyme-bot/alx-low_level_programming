#include "main.h"
/**
 * print_last_digit -Program that prints the last digit of a number
 * @n:The n is value for the digit
 *
 *Return: Value of last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
