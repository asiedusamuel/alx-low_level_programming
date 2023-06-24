#include "main.h"

/*betty style doc for function main goes there */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabet in lowercase
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

void print_alphabet(void);
