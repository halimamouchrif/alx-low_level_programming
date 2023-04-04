#include<stdio.h>

/**
 * main - prints the alphabet in lower case in reverse
 *
 * Return: returns always 0
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);

	putchar('\n');

	return (0);
}
