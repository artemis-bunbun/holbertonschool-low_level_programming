#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int digit_started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !digit_started)
		{
			sign *= -1;
		}
		else if (s[i] == '+' && !digit_started)
		{
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit_started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (digit_started)
		{
			break;
		}

		i++;
	}

	return (sign * result);
}
