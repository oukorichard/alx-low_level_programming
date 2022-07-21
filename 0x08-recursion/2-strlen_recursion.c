#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: no return.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
}
