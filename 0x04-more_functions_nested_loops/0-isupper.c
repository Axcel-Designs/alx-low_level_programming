#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - protoype
 * @c: variable
 * Return: 1 for uppercase and 0 for others
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);
}
