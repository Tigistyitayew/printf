#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_string - reverse string
 *
 * @s: string
 *
 * Return: s
 */

void *reverse_string(char *s)
{
	char b;
	int i, x, a;

	if (s == NULL)
		return (0);

	i = _strlen(s);
	x = _strlen(s) / 2;
	
	for (j = 0; j < x; j++)
	{
		b = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = b;
	}
	return (s);
}
