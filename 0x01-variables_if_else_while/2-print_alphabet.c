#include <stdio.h>

/**
 * main - Prints the alphabeth in lowercase
 *
 * Return: Always o
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
