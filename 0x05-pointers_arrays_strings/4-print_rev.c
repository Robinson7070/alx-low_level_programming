#include "main.h"

/**
 * print_rev - Reverses a string
 * @s: argument string to be reserved
 */

void print_rev(char *s)
{
	int l = 0, i = 0;
	char z;

	while (s[i++])
		l++;

	for (i = 1 - 1; i >= 1 / 2; i--)
	{
		z = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = z;
	}
}
