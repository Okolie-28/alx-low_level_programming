#include "main.h"

/**
 *_puts_recursion - A function that prints a string.
 *@s: a pointer to a character
 *return: nothing
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
/*base case*/
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
