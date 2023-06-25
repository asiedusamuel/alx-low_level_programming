#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	int limit = 4000000;
    int sum = 0;
    int prev = 1;
    int current = 2;

    while (current <= limit) {
        if (current % 2 == 0) {
            sum += current;
        }
        int next = prev + current;
        prev = current;
        current = next;
    }

    printf("%d\n", sum);

	return (0);
}
