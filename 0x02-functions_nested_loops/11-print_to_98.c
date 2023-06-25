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
	if (n <= 98)
    {
        for (; n < 98; n++)
        {
            _putchar(n / 10 + '0');
            _putchar(n % 10 + '0');
            _putchar(',');
            _putchar(' ');
        }
    }
    else
    {
        for (; n > 98; n--)
        {
            _putchar(n / 10 + '0');
            _putchar(n % 10 + '0');
            _putchar(',');
            _putchar(' ');
        }
    }

    _putchar('9');
    _putchar('8');
    _putchar('\n');
}
