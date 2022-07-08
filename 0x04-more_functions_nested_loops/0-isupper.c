#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 *
 * main - check the code.
 *
 * Return: Always 0.
 */
 int int _isuper(int c); 
 int main(void)
 {
     char c;

     c = 'A';
     printf("%c: %d\n", c, _isupper(c));
     c = 'a';
     printf("%c: %d\n", c, _isupper(c));
     return (0);
 }

 int _isuper(int c)
 {
   int b;
   if(c >= 65 && c<=96)
   {
   return (1);
   }
   else
   {
   return (0);
   }
 }
