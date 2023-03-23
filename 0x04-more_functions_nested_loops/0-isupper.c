#include "main.h"
/**
 * _isupper - check if parameters are uppercase charcter
 * @c: characters to be printed
 * Return: 1 if character is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
