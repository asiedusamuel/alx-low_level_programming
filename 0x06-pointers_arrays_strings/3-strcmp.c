#include "main.h"

/**
 *_strcmp - Copy the source string to the destination string
 *
 *@s1: The destination string to which the source string will be appended.
 *@s2: The source string that will be appended to the destination string.
 *
 *Return: a digit diff
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((*s1) - (*s2));
}
