#include "main.h"

/*betty style doc for function main goes there */
int _putchar(char c);

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *
 *Return: void
 */
int jack_bauer(int n)
{
	int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
			_putchar((hour / 10) + '0');
            _putchar((hour % 10) + '0');
            _putchar(':');
            _putchar((minute / 10) + '0');
            _putchar((minute % 10) + '0');
            _putchar('\n');
        }
    }
}
