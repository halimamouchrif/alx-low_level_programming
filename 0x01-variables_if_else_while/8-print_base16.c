#include<stdio.h>

/**
 * main - prints numbers in base 16
 *
 * Return: returns always 0
 */
int main(void)
{
	int x;
	char alp;

	for (x = 0; x <= 9; x++)
		putchar(x + '0');

	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
