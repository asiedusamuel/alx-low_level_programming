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
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n %= 1000000000;
		n = -n;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar('0' + (n % 10));
}
