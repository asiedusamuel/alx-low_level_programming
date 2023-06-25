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
    int i, j;
	
	if (n < 0 || n > 15) {
        return;
    }

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;

            if (j > 0 && result != 0) {
                _putchar(' ');
                _putchar(' ');
            }

            if (result < 10) {
                _putchar(' ');
            }

            _putchar(result + '0');

            if (j != n) {
                _putchar(',');
            }
        }

        _putchar('\n');
    }
}
