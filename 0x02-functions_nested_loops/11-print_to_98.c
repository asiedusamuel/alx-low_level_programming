#include "main.h"

/*betty style doc for function main goes there */
int _putchar(char c);

/**
 *print_to_98 - prints all natural numbers from n to 98.
 *
 *@n: The first integer to be added.
 *
 *Return: void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			int num = i;

			if (num < 0)
			{
				_putchar('-');
				num = -num;
			}

			if (num == 0)
			{
				_putchar('0');
			}
			else
			{
				int divisor = 1000000000;

				while (divisor > num)
					divisor /= 10;

				while (divisor != 0)
				{
					_putchar((num / divisor) + '0');
					num %= divisor;
					divisor /= 10;
				}
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}

			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
