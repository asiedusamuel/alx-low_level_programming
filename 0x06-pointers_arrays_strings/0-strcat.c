#include "main.h"

/**
 *_strcat - Concatenates (appends) the source string to the destination string.
 *Assumes that the destination string has enough memory allocated
 *
 *@param dest The destination string to which the source string will be appended.
 *@param src The source string that will be appended to the destination string.
 *@return A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	int i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return dest;
}
