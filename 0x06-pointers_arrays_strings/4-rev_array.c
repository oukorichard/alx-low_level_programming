#include "main.h"

/**
 * reverse_array - reverses an array of intergers
 * @a : pointer to int parameters
 * @n : pointer to int parameters
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int c;
	int b;
	int tmp;

	c = 0;
	b = n - 1;

	while (c < b)
	{
		tmp = a[c];
		a[c] = a[b];
		a[c] = tmp;
		c++;
		b--;
	}
}
