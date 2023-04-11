#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of string
 * @src: source of string
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
