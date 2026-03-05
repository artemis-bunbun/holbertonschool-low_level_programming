#include "main.h"

/**
 * Description: this script swaps the values to two ints
 * @a: pointer to int 1
 * @b: poniter to int 2
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
