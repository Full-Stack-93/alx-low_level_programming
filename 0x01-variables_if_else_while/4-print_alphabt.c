#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabet in lowercase except 'q' and 'e',
 * followed by a new line
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char alph, e, q;

	e = 'e';
	q = 'q';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	if (alph != e && alph != q)
	putchar(alph);
	}
	putchar('\n');

	return (0);
}
