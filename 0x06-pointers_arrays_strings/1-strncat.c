#include "main.h"

/**
 *_strncat - Concatenates the source string to the destination string
 *
 *@dest: The destination string to which the source string will be appended.
 *
 *@src: The source string that will be appended to the destination string.
 *
 *@n: Max number of characters to be concatenated
 *
 *Return: A pointer to the destination string.
 */
char *_strncat(char *dest, const char *src, int n)
{
	int dest_len, i;
	
	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
