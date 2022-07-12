#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int g = 0;

	for (; g < n; g++)
	{
		printf("%d", *(a + g));
		if (g != (n - 1))
			printf(", ");
	}
	printf("\n");
}
