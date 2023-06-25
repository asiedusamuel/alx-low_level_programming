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
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			
			if (result < 10)
			{
				_putchar(result);
			}
			else
			{
				_putchar(result);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
