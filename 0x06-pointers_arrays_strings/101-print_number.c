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
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	char digit = '0' + (n < 0 ? -n : n) % 10;

	_putchar(digit);
}
