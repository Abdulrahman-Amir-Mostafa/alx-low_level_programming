#include <stdio.h>

/**
 * main - Bodamiru Code
 * Description: Msh Faddy Ashr7 L7ddrtk
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int one;
	int two;
	int onnen;
	int twoeen;

for ( one = 0 ; one < 10 ; one++)
{	

	for (two = 0 ; two <= 10 ; two++)
	{
	
		for (onnen = 0 ; onnen < 10 ; onnen++)
		{
			for ( twoeen = 0 ; twoeen < 10 ; twoeen++)
			{
				putchar('0' + one);
				putchar('0' + two);
				putchar(32);
				putchar('0' + onnen);
				putchar('0' + twoeen);
				if (!(one == 9 && two == 8))
				{
					putchar(',');
					putchar(32);
				}
				twoeen++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}


