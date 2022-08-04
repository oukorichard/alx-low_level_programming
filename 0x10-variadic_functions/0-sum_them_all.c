#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
*sum_them_all- returns the sum of two values.
*@n- the number of arguments. 
*@return- sum of its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int p;
	int sum = 0;

	va_start(valist, n);

	for (p = 0; p < n; p++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}