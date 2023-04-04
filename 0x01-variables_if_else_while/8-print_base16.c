#include<stdio.h>

/**
 * main - prints the alphabet in lower case and upper case
 *
 * Return: returns always 0
 */
int main(void)
{
	int x;
  char alp;

	for (x = 0; x <= 9; alp++)
		putchar(x + '0');

	for (alp = 'A'; alp <= 'F'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
