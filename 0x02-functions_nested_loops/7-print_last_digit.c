#include "main.h"

/*betty style doc for function main goes there */
int _putchar(char c);
int _abs(int c);

/**
 *print_last_digit - computes the absolute value of an integer
 *@n: the number for which the last digit is returned
 *
 *Return: the last digit of the input number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-n);
	}
	
	int lastDigit = _abs(n) % 10;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
