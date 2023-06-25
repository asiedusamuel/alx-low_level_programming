#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	int n = 98;
	unsigned long prev = 1;
    unsigned long current = 2;

    printf("%lu, %lu", prev, current);

    for (int i = 3; i <= n; i++) {
        unsigned long next = prev + current;
		
        printf(", %lu", next);
        prev = current;
        current = next;
    }

    printf("\n");

	return (0);
}