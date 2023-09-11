#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int hex;
	char al;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	for (al = 'a'; al <= 'f'; al++)
		putchar(al);
	putchar('\n');

	return (0);
}
