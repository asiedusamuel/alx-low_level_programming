#include "main.h"
#include "_putchar.c"

/*betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar";
	int length = sizeof(message) - 1;
	int i;
	for (i = 0; i < length; i++)
	{
		_putchar(message[i]);
	}
	
	return (0);
}
