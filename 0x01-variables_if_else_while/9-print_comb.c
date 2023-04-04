#include<stdio.h>

/**
 * main - prints number from 0 to 9
 *
 * Return: returns always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		putchar(x + '0');
    		putchat(', ');
	}

	putchar('9');

	return (0);
}
