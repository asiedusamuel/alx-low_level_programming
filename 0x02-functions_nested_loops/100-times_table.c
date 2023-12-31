#include "main.h"

/*betty style doc for function main goes there */
int _putchar(char c);

/**
 *print_times_table - prints the n times table, starting with 0.
 *
 *@n: The integer to be multiply.
 *
 *Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	if (n == 0)
	{
		_putchar(n + '0');
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j > 0)
			{
				_putchar(',');

				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (result <= 100)
				{
					_putchar(' ');
				}
				else if (result > 100)
				{
					_putchar(' ');
				}
			}

			if (result < 10)
			{
				if (i > 0 && (j > 0 && i > 9))
				{
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(result + '0');
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}
		}

		_putchar('\n');
	}
}
