#include "main.h"

/*betty style doc for function main goes there */

/**
 *_islower - check if char is lower
 *
 *Return: void.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
