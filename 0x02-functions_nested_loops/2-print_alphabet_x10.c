#include "main.h"

/**
 *  2-print_alphabet_x10.c - prints the alphabet in lowercase
 *  followed by new line.
 *
 *  Return: Always 0.
 */
void print_alphabet_x10(void);
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
