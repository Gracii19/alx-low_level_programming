#include <stdio.h>

 /**
  * main - Print alphabet in lowercase and uppercase
  *
  * Return: Always 0
  */

int main(void)

{
	char letter;
	char LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(LETTER);
	putchar('\n');
	return (0);
}
