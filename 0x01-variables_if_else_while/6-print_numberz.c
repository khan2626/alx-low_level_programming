#include <stdio.h>
/**
 * main - print single digit in base 10
 * Return: 0
 */
int main(void)
{
	for (num = 0; num < 10; num++)
		putchar(num % 10);

	putchar("\n");

	return (0);
}
