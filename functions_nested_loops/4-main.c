#include "main.h"
/**
 * main - entry point
 * Description: main.c file for isalpha.c file for task 4
 * Return: Always 0 (Success)
 */
int main(void)
{	char c;
	for (c = 'A'; c <= 'z'; c++)
	{		if (_isalpha(c))
		{			_putchar('1');
		}
		else
		{			_putchar('0');
		}
	}	_putchar('\n');
	return (0);
}
