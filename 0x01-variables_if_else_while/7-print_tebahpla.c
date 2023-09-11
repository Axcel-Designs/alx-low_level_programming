#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');

	return (0);
}
