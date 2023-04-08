#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if ((argc - 1) == 2)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	return (0);
}
