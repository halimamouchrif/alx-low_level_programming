#include <stdio.h>
#include "main.h"

/*
 * main - prints the number of arguments passed into it.
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
  x = argv[1] * argv[2];
	printf("%d\n", x);

	return (0);
}
