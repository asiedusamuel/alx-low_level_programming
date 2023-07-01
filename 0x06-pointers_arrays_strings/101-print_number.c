#include "main.h"

/**
 *print_number - encodes a string using rot13
 *
 *@n: The number to be modified.
 *
 *Return: A pointer to the modified number
 */
void print_number(int n)
{
	if (n == 0) {
        _putchar('0');
        return;
    }

    if (n < 0) {
        _putchar('0' + n);
        n = -n;
    }

    int divisor = 1;
    int temp = n;

    while (temp > 9) {
        divisor *= 10;
        temp /= 10;
    }

    while (divisor > 0) {
        int digit = n / divisor;
		
        _putchar('0' + digit);
        n %= divisor;
        divisor /= 10;
    }
}
