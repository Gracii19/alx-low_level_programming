#include <stdio.h>

 /**
  * main - print digits of base 10 starting from 0
  *
  * Decription: main is the entry point
  *
  * Return: Always 0
  */

int main(void)

{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}