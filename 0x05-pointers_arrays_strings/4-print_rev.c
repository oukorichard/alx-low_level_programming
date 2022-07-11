#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int counting = 0;

	while (counting >= 0)
	{
		if (s[counting] == '\0')
			break;
		counting++;
	}

	for (counting--; counting >= 0; counting--)
		_putchar(s[counting]);
	_putchar('\n');
}
