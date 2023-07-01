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
	int divisor, temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n <= -2147483647) 
	{
        _putchar('-');
        print_number(-(n / 10));
        _putchar('0' - (n % 10));

        return;
    }

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	temp = n;

	while (temp > 9)
	{
		if (divisor >= 2147483647 / 10)
		{
			return;
		}

		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		int digit = n / divisor;
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
