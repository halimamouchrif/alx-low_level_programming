#include<stdio.h>

/**
 * main - prints number from 0 to 9
 *
 * Return: returns always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar("%d", x);

	putchar("\n");

	return (0);
}
