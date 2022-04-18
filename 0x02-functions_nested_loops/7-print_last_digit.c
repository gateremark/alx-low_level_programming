#include "main.h"

/**
 * print_last_digit(int n)
 * of a number.
 *
 * @n: input number as integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int i=1;
	i = n % 10;
	if (i < 0)
	{
		_putchar(-1 + 48);
		return (-i);
	}
	else
	{
		_putchar(i) + 48);
		return (i);
	}
}
