#include "main.h"

/*betty style doc for function main goes there */

int _putchar(char c);

/**
 *print_alphabet
 *
 *Return: VOID
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
