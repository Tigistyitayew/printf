#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * len - length of number
 * @n: int
 * Return: length
 */
int len(int n)
{
	int x = 0;

	while (n / 10 != 0)
	{
		x++;
		n /= 10;
	}
	return (x);
}
