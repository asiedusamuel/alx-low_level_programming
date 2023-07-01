#include "main.h"

/**
 *_strncpy - Copy the source string to the destination string
 *
 *@dest: The destination string to which the source string will be appended.
 *@src: The source string that will be appended to the destination string.
 *@n: Max number of characters to be concatenated
 *
 *Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
