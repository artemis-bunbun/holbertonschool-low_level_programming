#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the flattened integer matrix
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int main_diag = 0;
	int anti_diag = 0;

	for (i = 0; i < size; i++)
	{
		main_diag += a[i * size + i];
		anti_diag += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", main_diag, anti_diag);
}
