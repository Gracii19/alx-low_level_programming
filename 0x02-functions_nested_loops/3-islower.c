#include "main.h"

/**
 * _islower - checks for lowercase characters.
 *
 * @c: character to be chacked
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
