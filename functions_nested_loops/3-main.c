#include "main.h"
/**
 * main - Entry point
 * Description: main.c file for task 3 - is lower
 * Return: Always 0 (Success)
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
