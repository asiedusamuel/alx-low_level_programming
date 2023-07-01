#include "main.h"

/**
 *rot13 - encodes a string using rot13
 *
 *@str: The string to be modified.
 *
 *Return: A pointer to the modified string
 */
char *rot13(char *str)
{
	char *ptr;

	ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
		{ *ptr = *ptr + 13;
		}
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
		{ *ptr = *ptr - 13;
		}

		ptr++;
	}

	return str;
}
