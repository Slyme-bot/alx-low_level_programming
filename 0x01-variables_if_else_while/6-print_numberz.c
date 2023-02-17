#include <stdio.h>
/**
 * main - program that prints single digit numbers of base 10 starting from 0
 *
 * Description: This is a small program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
