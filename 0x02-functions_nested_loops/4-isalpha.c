#include "main.h"

/*betty style doc for function main goes there */

/**
 * _isalpha - checks if a character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
