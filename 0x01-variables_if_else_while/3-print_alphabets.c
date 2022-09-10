#include <stdio.h>

 /**
  * main - Print alphabet in lowercase and uppercase
  *
  * Description: 'Prints the alphabet in lowercase, uppercase then a new line'
  *
  * Return: Always zero
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
