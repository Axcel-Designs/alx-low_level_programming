#include "main.h"
/**
 * print_sign - to print operators
 * @n: inter to be checked
 * Return: 1 for > zero, 0 for zero and -1 for < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar(0);
		return (0);
	}
}
