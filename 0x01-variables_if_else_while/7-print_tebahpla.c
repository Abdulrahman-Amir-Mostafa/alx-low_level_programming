#include <stdio.h>

/**
 * main - main Bodamiru code
 * Description: program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

