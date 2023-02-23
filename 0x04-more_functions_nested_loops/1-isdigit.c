#include "main.h"
/**
 * _isdigit - aheaks for a digit (0-9).
 * @a: The number to be aheaked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);

	else
		return (0);
}
