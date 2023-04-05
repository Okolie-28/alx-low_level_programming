#include "main.h"
/**
 *_memset - fill the block of memory with a specific value
 * @s: starting address of memory to be filled
 * @n: number of bytes to be changed
 * @b: input variable of char type represents
 * the character to fill s
 * Return: changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int r = 0;

	for (n > 0; r++)
	{
		s[r] = b;
		n--;
	}
	return (s);
}
