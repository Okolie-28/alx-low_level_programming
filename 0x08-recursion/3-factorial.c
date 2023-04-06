#include "main.h"

/**
 *factorial - a function that calculates the factorial
 *of a number
 *@n: the number whose factorial will be calculated
 *Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
	{
	return (-1);
	}
else if
	(n == 0)
{
		return (1);
	}
else
	{
	return (n * factorial(n - 1));
	}
}
