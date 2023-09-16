#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_alphabet - entry point
* 
* Return: void 
*/
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
}
