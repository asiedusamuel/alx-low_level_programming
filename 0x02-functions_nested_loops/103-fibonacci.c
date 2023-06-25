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
        int next = prev + current;
		
        if (current % 2 == 0) {
            sum += current;
        }
        prev = current;
        current = next;
    }

    printf("%d\n", sum);

	return (0);
}
