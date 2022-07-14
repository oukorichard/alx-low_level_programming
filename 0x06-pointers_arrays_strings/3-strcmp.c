#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int o = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + o) == '\0') && (*(s2 + o) == '\0'))
			break;
		op = *(s1 + o) - *(s2 + o);
		o++;
	}

	return (op);
}
