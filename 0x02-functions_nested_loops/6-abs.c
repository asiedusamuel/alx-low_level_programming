#include "main.h"

/*betty style doc for function main goes there */

/**
 *_abs - computes the absolute value of an integer
 *@n: the number for which absolute value is computed
 *
 *Return: the absolute value of the input number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}

	return (n);
}
