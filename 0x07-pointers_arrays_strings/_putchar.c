#include "main.h"
#include <unistd.h>
/**
 * _putchar - Program that writes he character c o stdou
 * @c:The character to print
 * Return: On success print 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
