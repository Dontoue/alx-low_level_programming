#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 *
 * @s : input string
 *
 * Return:Return nothing.
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s +i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
