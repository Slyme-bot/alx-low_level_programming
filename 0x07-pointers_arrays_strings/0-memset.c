#include "main.h"
#include <stddef.h>
/**
 * _memset - program that fills the memory with a constant byte
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char c, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++ )
	{
		s[i] = c;
		n--;
	}
	return(s);
}
