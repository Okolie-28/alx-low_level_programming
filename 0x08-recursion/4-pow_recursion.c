#include "main.h"
/**
 *_pow_recursion - A function that calculate x**y
 *@x: input value
 *@y: power of x
 *Return: result
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);

else
return (x * _pow_recursion(x, y - 1));
}
