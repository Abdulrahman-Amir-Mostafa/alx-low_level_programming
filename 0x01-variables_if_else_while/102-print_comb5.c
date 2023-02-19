#include <stdio.h>

/**
 * main - Bodamiru Code
 * Description: Msh Faddy Ashr7 L7ddrtk
 * Return: Always 0 (Succes)
 */
 
 int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
