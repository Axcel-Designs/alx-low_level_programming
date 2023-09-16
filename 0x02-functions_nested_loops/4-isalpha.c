#include "main.h"
#include <ctype.h>
/**
 * _isalpha - used to check for alphabet
 * @c: the variable to be checked
 * Return: 1 for alphabet and 0 for others
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
