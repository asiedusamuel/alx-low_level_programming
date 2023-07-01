#include "main.h"

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
    int carry, i;

    carry = 0;
    i = 0;

    while (*n1 != '\0' || *n2 != '\0' || carry)
	{
        if (i >= size_r - 1)
		{
            return 0;
        }

        int digit1, digit2, sum;

        digit1 = (*n1 != '\0') ? *n1 - '0' : 0;
        digit2 = (*n2 != '\0') ? *n2 - '0' : 0;

        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[i] = sum % 10 + '0';

        i++;
        n1++;
        n2++;
    }

    r[i] = '\0';
    return (r);
}
