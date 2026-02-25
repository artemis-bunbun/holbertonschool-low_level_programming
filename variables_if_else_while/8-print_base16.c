#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the hexadecimal numbers from 0 to 15.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int i;
	for (i = 0; i < 16; i++)	{		if (i < 10)
				putchar(i + '0');
			else				putchar(i - 10 + 'a');
	}	putchar('\n');
	return (0);
}
