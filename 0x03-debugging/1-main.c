#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/
/**
* while (i < 10), i does not increaments hence it is always 0 or less than 10
*/
/*{*/
	/*	putchar(i);*/
	/*}*/
int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
/**
* while (i < 10), i does not increaments hence it is always 0 or less than 10
*/
/*{*/
	/*	putchar(i);*/
	/*}*/
