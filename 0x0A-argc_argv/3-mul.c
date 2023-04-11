#include <stdio.h>
#include "main.h"

/*
 * main - prints the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success
 */
int main(int argc , char *argv[])
{
	int x;
	if (argc != 3)
	{
	printf("Error");
	return (1);
	}
	x = (int) argv[1] * (int) argv[2];
	printf("%d\n", x);

	return (0);
}
