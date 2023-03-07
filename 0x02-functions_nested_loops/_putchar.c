#include <unistd.h>

/**
 * _putchar - writes _putchar and a new line
 * @c: The character to print
 * Return: On success 1
 * Return: On failure -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
