#include "main.h"

/**
 *cap_string - Capitalizes all words of a string
 *
 *@str: The string to be modified.
 *
 *Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i, capitalize;

	i = 0;
	capitalize = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize)
		{
			str[i] = toupper(str[i]);
			capitalize = 0;
		}

		i++;
	}

	return (str);
}
