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
	char *ptr, alphabet, rot13Alphabet, index, pos;

	ptr = str;
	alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	rot13Alphabet = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr != '\0')
	{
		pos = alphabet;
		index = 0;

		while (*pos != '\0')
		{
			if (*ptr == *pos)
			{ 	*ptr = rot13Alphabet[index];
				break;
			}

			pos++;
			index++;
		}

		ptr++;
	}

	return (str);
}
