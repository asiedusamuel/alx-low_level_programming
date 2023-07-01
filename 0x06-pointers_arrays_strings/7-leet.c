#include "main.h"

/**
 *leet - Capitalizes all words of a string
 *
 *@str: The string to be modified.
 *
 *Return: A pointer to the modified string
 */
char *leet(char *str)
{
	int i, j;
	char *ptr = str;
	char leetChars[] = { '4', '3', '0', '7', '1' };
	char letters[] = { 'a', 'e', 'o', 't', 'l' };

	while (*ptr != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (*ptr == letters[i] || *ptr == (letters[i] - ('a' - 'A')))
			{ 	*ptr = leetChars[i];
				break;
			}

			i++;
		}

		ptr++;
	}

	return (str);
}
