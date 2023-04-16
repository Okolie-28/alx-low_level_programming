#include <unistd.h>

/**
 *_putchar - writes the character c to standard output
 *@c: The character to printed out
 *
 *Return: 1 (success)
 *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
