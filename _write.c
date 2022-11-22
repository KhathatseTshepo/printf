#include <unistd.h>

/**
 * _write - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success).
 */
int _write(char c)
{
	return (write(1, &c, 1));
}