#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*more headers goes there */

/*betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' || letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
