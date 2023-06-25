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
	/* Check if n is greater than 98 */
    if (n > 98)
    {
        /* Print numbers in descending order from n to 98 */
        while (n >= 98)
        {
            _putchar(n / 100 + '0'); /* Print hundreds digit */
            _putchar((n / 10) % 10 + '0'); /* Print tens digit */
            _putchar(n % 10 + '0'); /* Print ones digit */
            
            /* Check if n is not equal to 98 */
            if (n != 98)
            {
                _putchar(','); /* Print comma */
                _putchar(' '); /* Print space */
            }
            
            n--;
        }
    }
    /* Check if n is less than 98 */
    else if (n < 98)
    {
        /* Print numbers in ascending order from n to 98 */
        while (n <= 98)
        {
            _putchar(n / 100 + '0'); /* Print hundreds digit */
            _putchar((n / 10) % 10 + '0'); /* Print tens digit */
            _putchar(n % 10 + '0'); /* Print ones digit */
            
            /* Check if n is not equal to 98 */
            if (n != 98)
            {
                _putchar(','); /* Print comma */
                _putchar(' '); /* Print space */
            }
            
            n++;
        }
    }

    _putchar('\n');
}
