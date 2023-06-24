/**
*#include "_putchar.c"
**/

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
