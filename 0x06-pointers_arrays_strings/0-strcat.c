#include "main.h"

/**
 *_strcat - Concatenates the source string to the destination string
 *
 *@dest: The destination string to which the source string will be appended.
 *
 *@src: The source string that will be appended to the destination string.
 *
 *Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
