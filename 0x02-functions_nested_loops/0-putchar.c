#include "main.h"

/**
* _putchar prints character, q on the screen.
*
*The programm then returns success if success.
*/
  int _putchar(char q)
{
  return (write(1, &q, 1));
}
