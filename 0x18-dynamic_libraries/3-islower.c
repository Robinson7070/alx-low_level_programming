#include "main.h"

/**
 * _islower - checkes for lowercase
 * @c: input
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
