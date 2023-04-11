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
  int i;
  
  for(i=0; i < argc; i++)
	  printf("%s\n", argv[i]);

	return (0);
}
