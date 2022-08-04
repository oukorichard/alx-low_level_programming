#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
*sum_them_all- returns the sum of two values.
*@n- the number of arguments. 
*@return- sum of its parameters.
*
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}

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