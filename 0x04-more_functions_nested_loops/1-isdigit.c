#include "main.h"

/**
 *_isdigit - Check if a character is a digit.
 *
 *@ch The character to be checked.
 *
 *Return 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
