#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Description: Reverse order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
	putchar(c);
	c--;
	}
putchar('\n');
return (0);
}
