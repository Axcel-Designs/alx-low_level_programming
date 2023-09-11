#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	char alph, q, e;

	q = 'q';
	e = 'e';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != q && alph != e)
		putchar(alph);
	}

	putchar('\n');

	return (0);
}
