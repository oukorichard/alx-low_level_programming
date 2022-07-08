#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int p, j;

	for (p = 0; p < size; p++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (p != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
