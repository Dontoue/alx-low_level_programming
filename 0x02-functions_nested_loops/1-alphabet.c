#include "main.h"
/**
 * print_alphabet- prints lowercase alphabet followed by a
 * newline.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
