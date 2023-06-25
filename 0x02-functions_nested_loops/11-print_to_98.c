#include "main.h"

/*betty style doc for function main goes there */


/**
 * add - Adds two integers and returns the result.
 *
 * @num1: The first integer to be added.
 *
 * Return: void.
 */
void print_to_98(int num1)
{
	/* Check if n is greater than 98 */
    if (n > 98)
    {
        /* Print numbers in descending order from n to 98 */
        while (n > 98)
        {
            _putchar(n / 100 + '0'); /* Print hundreds digit */
            _putchar((n / 10) % 10 + '0'); /* Print tens digit */
            _putchar(n % 10 + '0'); /* Print ones digit */
            _putchar(','); /* Print comma */
            _putchar(' '); /* Print space */
            n--;
        }
    }
    /* Check if n is less than 98 */
    else if (n < 98)
    {
        /* Print numbers in ascending order from n to 98 */
        while (n < 98)
        {
            _putchar(n / 100 + '0'); /* Print hundreds digit */
            _putchar((n / 10) % 10 + '0'); /* Print tens digit */
            _putchar(n % 10 + '0'); /* Print ones digit */
            _putchar(','); /* Print comma */
            _putchar(' '); /* Print space */
            n++;
        }
    }

    /* Print 98 at the end */
    _putchar('9');
    _putchar('8');
    _putchar('\n');
}
