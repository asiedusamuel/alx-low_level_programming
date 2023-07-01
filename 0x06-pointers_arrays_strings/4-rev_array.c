#include "main.h"

/**
 *reverse_array - Reverses the content of an array of integers.
 *
 *@a: The array of integers to be reversed.
 *@n: The number of elements in the array.
 *
 *Return: a digit diff
 */
void reverse_array(int *a, int n)
{
	int start, end;
	
	start = 0;
	end = n - 1;

	while (start < end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
