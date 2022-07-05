#include "main.h"

/**
 * This programm prints alphabets in lower case
 *
 * And return 0 when susccessful.
 */
void print_alphabet(void)
{
	
	for (int i; i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
