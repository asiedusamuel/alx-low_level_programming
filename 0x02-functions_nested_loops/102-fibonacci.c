#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	int i, limit = 50;
	unsigned long fib[50];

	fib[0] = 1;
	fib[1] = 2;

	printf("%lu, %lu", fib[0], fib[1]);

	for (i = 2; i < limit; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(", %lu", fib[i]);
	}

	printf("\n");

	return (0);
}
