#include <stdio.h>

/**
 * main - print 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 1o) + '0');

	putchar('\n');

	return (0);
}

