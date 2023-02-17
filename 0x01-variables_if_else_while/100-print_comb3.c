#include <stdio.h>
/**
 * main - A program that prints two single digits
 *
 * Description: Single digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
        int a;

        for (a = 0; a < 10; a++)
        {
         for (b = a + 1; b < 10; b++)
	 {
		 putchar( a + '0');
		 putchar (b + '0');
		 if (a == 8 && b == 9)
		 {
			 putchar(',');
			 putchar(' ');
                }
        }
	} 
        putchar('\n');
        return (0);
}
