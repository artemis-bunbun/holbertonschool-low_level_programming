#include "main.c"
/**
 * main - Entry point
 * Description: main.c file for task 3 - is lower
 * Return: Always 0 (Success)
 */
int main(void)
{	char c;
	for (c = 'A'; c <= 'z'; c++)
	{		if (_islower(c))
		{			_putchar(c);
		}
	}
	_putchar('\n');
	return (0);
}
