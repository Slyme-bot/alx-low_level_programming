#include<stdio.h>
/**
 *main - program that prints the alphabet in lowercase, followed by a new line
 *
 *Description: 'the program's description'
 *
 *Return: 0(Success)
 */
int main(void)
{
	char c;
c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
