#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: strings source
 * @dest: strings destination
 * @n: number of bytes to be copied
 * Return: destination strings
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (i = 0; n[i] != '\0'; i++)
			dest[i] = src[i];
	}
	return (dest);
}
