#include "main.h"

/*betty style doc for function main goes there */

int _putchar(char c);

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
	return (0);
}

int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
	
	return (0);
}

