#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 *
 * Return: Always 0.
 */
int _isupper(int c);
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
