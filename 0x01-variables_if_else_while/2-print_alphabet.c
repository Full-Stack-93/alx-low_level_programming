#include <stdio.h>

/**
 * main - prints out the alphabets followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);
	putchar('\n');

	return (0);
}
