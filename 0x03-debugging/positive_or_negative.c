#include <stdio.h>

/*more headers goes there */

/*betty style doc for function main goes there */
/**
 * positive_or_negative - Entry point
 *
 *@i: the number to check for positive or negative
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is negative", n);
	}

	printf("\n");

	return (0);
}
