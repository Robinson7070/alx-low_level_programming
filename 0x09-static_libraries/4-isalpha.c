#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @e: input
 * Return: 1 if e is letter (both lower or upper), 0 if otherwise
 */

int _isalpha(int e)
{
	if ((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z'))
		return (1);
	return (0);
}
