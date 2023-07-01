#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *infinite_add - Capitalizes all words of a string
 *
 *@n1: input 1.
 *@n2: input 2.
 *@r: input 3.
 *@size_r: input 44.
 *
 *Return: A pointer to the modified string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, i, digit1, digit2, sum;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 > size_r - 1 || len2 > size_r - 1)
	{
		return 0;
	}

	carry = 0;
	i = size_r - 2;

	r[size_r - 1] = '\0';

	while (i >= 0)
	{
		digit1 = (len1 > 0) ? n1[len1 - 1] - '0' : 0;
		digit2 = (len2 > 0) ? n2[len2 - 1] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[i] = sum % 10 + '0';

		i--;
		len1--;
		len2--;
	}

	if (carry)
	{
		if (size_r == 1)
		{
			return 0;
		}

		memmove(r + 1, r, size_r - 1);
		r[0] = carry + '0';
	}

	return r;
}