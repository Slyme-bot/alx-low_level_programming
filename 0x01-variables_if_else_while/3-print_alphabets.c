#include<stdio.h>
/**
 *main - A program that prints lowercase and uppercase in the new line
 *
 * Return: 0(Success)
 */
int main(void)
{
	char b;
	char c;

	b = 'a';
	c = 'A';
	while (b <= 'z')
	{
	putchar(b);
	b++;
	}
	while (c <= 'Z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
