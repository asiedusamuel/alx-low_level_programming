#include "main.h"

/*betty style doc for function main goes there */
int _putchar(char c);

/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;
			if (result < 10)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\b');
		_putchar('\n');
	}
}
