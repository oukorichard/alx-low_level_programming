#include "main.h"

/**
 * The print_alphabet in this programm prints alphabets in lower case
 *
 * And return 0 when susccessful.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
