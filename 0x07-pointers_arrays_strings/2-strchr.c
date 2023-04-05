#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to the string
 * @c: character to located
 *
 * Return: first occurence of charatcer or NULL if not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
