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
	int digit, power;
	
	if (n < 0) {
        _putchar('-');
        n = -n;
    }

    power = 1;
	
    while (power * 10 <= n) {
        power *= 10;
    }

    while (power > 0) {
        digit = n / power;
        _putchar('0' + digit);
		
        n %= power;
        power /= 10;
    }
}
