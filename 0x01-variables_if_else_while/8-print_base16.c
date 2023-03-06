#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char alph;

	for (num = '0'; num <= '9'; num++)
	putchar(num);

	for (alph = 'a'; alph <= 'f'; alph++)
	putchar(alph);
	putchar('\n');

	return (0);
}
