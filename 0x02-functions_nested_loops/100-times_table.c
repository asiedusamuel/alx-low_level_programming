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
	if (n < 0 || n > 15) {
        return; // Exit the function if n is out of range
    }

    int i, j;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;

            if (j > 0) {
                _putchar('\t'); // Add a tab before each number (except the first column)
            }

            if (result < 10) {
                _putchar(result + '0'); // Print single-digit numbers
            } else {
                _putchar((result / 10) + '0'); // Print tens digit
                _putchar((result % 10) + '0'); // Print ones digit
            }
        }

        _putchar('\n'); // Move to the next row
    }
}
