#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char alphl;
	char alphu;

	for (alphl = 'a'; alphl <= 'z'; alphl++)
	putchar (alphl);
	for (alphu = 'A'; alphu <= 'Z'; alphu++)
	putchar(alphu);
	putchar('\n');

	return (0);
}
