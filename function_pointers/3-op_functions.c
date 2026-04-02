#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first int
 * @b: second int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first int
 * @b: second int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first int
 * @b: second int
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of a / b
 * @a: first int
 * @b: second int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
