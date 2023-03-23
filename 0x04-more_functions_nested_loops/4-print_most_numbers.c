#include "main.h"

/**
 * print_most_numbers - print 0 t0 9 but not 2 and 4
 * Return: no return
 */
void print_most_numbers(void)
{
	int ch

	for (ch = 0; ch < 10; ch++)
	{
		if (ch != 2 && ch != 4)
			_putchar(ch);
	}
	_putchar('\n');
}
