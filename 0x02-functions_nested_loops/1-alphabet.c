#include "main.h"

/*betty style doc for function main goes there */

int _putchar(char c);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
