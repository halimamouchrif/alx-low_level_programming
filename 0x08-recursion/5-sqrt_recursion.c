#include "main.h"

/**
 * calcul_sqrt - returns the sqrt of a number
 * @x: a number of type int
 * @y: a number of type int
 * Return: a number of type int
 */
int calcul_sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number of type int
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (calcul_sqrt(1, n));
}
