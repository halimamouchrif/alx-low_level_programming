#include<stdio.h>

/**
 * main - prints number from 0 to 9
 *
 * Return: returns always 0
 */
int main(void)
{
	char x = '0';
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar(x);
		x++;
		y++;
	}
	
	putchar('\n');

	return (0);
}
