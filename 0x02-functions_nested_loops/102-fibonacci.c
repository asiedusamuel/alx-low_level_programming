#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, limit = 50;
    int fib[50];
    fib[0] = 1;
    fib[1] = 2;

    printf("%d, %d", fib[0], fib[1]);

    for (int i = 2; i < limit; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf(", %d", fib[i]);
    }

    printf("\n");

	return (0);
}
