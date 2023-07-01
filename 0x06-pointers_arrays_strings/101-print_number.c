#include "main.h"

/**
 *print_number - encodes a string using rot13
 *
 *@n: The number to be modified.
 *
 *Return: A pointer to the modified number
 */
void print_number(int n)
{
	int divisor;

	divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (divisor <= n / 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = n / divisor;
	
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
