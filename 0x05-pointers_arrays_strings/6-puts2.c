#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int character = 0;

	while (character >= 0)
	{
		if (str[character] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (character % 2 == 0)
			_putchar(str[character]);
		character++;
	}
}
