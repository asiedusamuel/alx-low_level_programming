#include <stdlib.h>
#include <stdio.h>
#include "main.h"


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

	for (int i = 0; i < length; i++)
	{
		_putchar(message[i]);
	}
}
