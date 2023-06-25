#include "main.h"

/*betty style doc for function main goes there */
int _putchar(char c);

/**
 * add - Adds two integers and returns the result.
 *
 * @n: The first integer to be added.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            _putchar(i / 10 + '0');
            _putchar(i % 10 + '0');

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            _putchar(i / 10 + '0');
            _putchar(i % 10 + '0');

            if (i != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }

    _putchar('\n');
}
