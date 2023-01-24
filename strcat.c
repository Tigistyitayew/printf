#include "main.h"
#include <unistd.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to string
 * @n: int
 * strncat: concatenates two strings
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	return (dest);
}
