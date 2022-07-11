#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int t = 0;

	while (tt >= 0)
	{
		if (str[t] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[t]);
		t++;
	}
}
