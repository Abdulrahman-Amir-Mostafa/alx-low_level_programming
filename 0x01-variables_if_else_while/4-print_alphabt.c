#include <stdio.h>

/**
 * main - main Bodamiru code
 * Description: program that prints all the alphabet
 * in lowercase except q and e,followed by a new line.
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}

	}
	putchar('\n');
	return (0);
}

