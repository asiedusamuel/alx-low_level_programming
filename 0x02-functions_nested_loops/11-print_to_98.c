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
            _putchar('0' + (n / 10));  /* Print tens digit */
            _putchar('0' + (n % 10));  /* Print ones digit */
            _putchar(',');  /* Print comma */
            _putchar(' ');  /* Print space */
        }
    }
    else
    {
        for (; n > 98; n--)
        {
            _putchar('0' + (n / 10));  /* Print tens digit */
            _putchar('0' + (n % 10));  /* Print ones digit */
            _putchar(',');  /* Print comma */
            _putchar(' ');  /* Print space */
        }
    }

    _putchar('9');  /* Print tens digit of 98 */
    _putchar('8');  /* Print ones digit of 98 */
    _putchar('\n');  /* Print new line */
}
