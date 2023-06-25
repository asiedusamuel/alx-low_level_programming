#include "main.h"

/*betty style doc for function main goes there */
int _putchar(char c);

/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *@n: The integer to be multiply.
 *
 *Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (result < n)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / n) + '0');
				_putchar((result % n) + '0');
			}

			if (j < n-1)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
