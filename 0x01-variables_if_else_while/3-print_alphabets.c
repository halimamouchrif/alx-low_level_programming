#include<stdio.h>

/**
 * main - prints the alphabet in lower case and upper case
 *
 * Return: returns always 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
