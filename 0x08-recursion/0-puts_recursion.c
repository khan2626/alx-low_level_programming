#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
		_putchar(s[i]);
	else
		_putchar('\n');
}
