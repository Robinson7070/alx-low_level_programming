#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @ernest: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int ernest)
{
	int eks;

	eks = (ernest % 10);

	if (eks < 0)
	{
		eks = (-1 * eks);
	}

	_putchar(eks + '0');
	return (eks);
}
