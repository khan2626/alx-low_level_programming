#include "main.h"

/**
 * _strncat - concatenate two strings with n bytes
 * @dest: string destination
 * @src: string source
 * @n: number of characters to be appended
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int destlen = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
