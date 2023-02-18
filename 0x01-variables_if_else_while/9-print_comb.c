#include <stdio.h>

/**
 * main - main Bodamiru code
 * Description: msh faddy ashr7lk
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

