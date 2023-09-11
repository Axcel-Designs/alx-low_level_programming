#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 *
 * Return: 0 always
 */
int main(void)
{
	int alph;
	int ALPH;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
		putchar(ALPH);
	putchar('\n');

	return (0);
}
