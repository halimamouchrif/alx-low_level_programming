#include"main.h"
/**
 * prime_check - checks if the number is prime
 * @x: a number of type int
 * @y: a number of type int
 * Return: a number of type int
 */
int prime_check(int x, int y)
{
	
	if (x < 2 || x % y == 0)
		return (0);
	else if (y > x/2)
		return (1);
	else
		return (prime_check(x, y+1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: a number of type int
 * Return: returns a number of type int 1 if true otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(n, 2));
}
