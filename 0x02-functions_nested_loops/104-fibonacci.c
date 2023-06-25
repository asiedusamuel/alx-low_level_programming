#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	int prev = 1;
	int current = 2;
	int count = 2;
	int n = 98;

	printf("%d, %d", prev, current);

	while (count < n)
	{
		int next = prev + current;
		printf(", %d", next);
		prev = current;
		current = next;
		count++;
	}

	printf("\n");

	return (0);
}
