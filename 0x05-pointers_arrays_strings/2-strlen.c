#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != '\0')
		p++;
	return (p);
}
