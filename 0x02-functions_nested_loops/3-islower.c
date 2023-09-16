#include "main.h"
/**
 * _islower - check for lower alphabets
 *@c: character to  be checked
 * Return: 1 for lower alph and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
