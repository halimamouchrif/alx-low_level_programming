#include<stdio.h>
/**
 * main - Prints the size of many primitif types,
 *                to standard error.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)",sizeof(char));
	printf("Size of an int: %d bytes(s)",sizeof(int));
	printf("Size of a long int: %d bytes(s)",sizeof(long int));
	printf("Size of a long long int: %d bytes(s)",sizeof(long long int));
	printf("Size of a float: %d bytes(s)",sizeof(float));
	return (0);
}	
