#include "main.h"

/**
*
*
*/
char *_strcat(char *dest, char *src);
{
  char s1[98] = "Hello ";
  char s2[] = "World!\n";
  char *ptr;
  ptr  = _strcat(s1, s2);

  putchar "(ptr)";

  return 0; 
}
