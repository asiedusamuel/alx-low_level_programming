#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, limit = 50;
    unsigned long long int fib1 = 1, fib2 = 2;

    printf("%llu, %llu", fib1, fib2);

    for (i = 3; i <= limit; i++) {
        unsigned long long int fib = fib1 + fib2;
        printf(", %llu", fib);
        fib1 = fib2;
        fib2 = fib;
    }

    printf("\n");

	return (0);
}
