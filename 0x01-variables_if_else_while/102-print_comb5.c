#include <stdio.h>

/**
 * main - Bodamiru Code
 * Description: Msh Faddy Ashr7 L7ddrtk
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int 3addy;
	int yastta;
	int da;
	int CODE;

for ( 3addy = 0 ; 3addy < 10 ; 3addy++)
{

	for (yastta = 0 ; yassta <= 10 ; yassta++)
	{

		for (da = 0 ; da < 10 ; da++)
		{
			for ( CODE = 0 ; CODE < 10 ; CODE++)
			{
				putchar('0' + 3addy);
				putchar('0' + yastta);
				putchar(32);
				putchar('0' + da);
				putchar('0' + CODE);
				if (!(3addy == 9 && yastta == 8))
				{
					putchar(',');
					putchar(32);
				}
				CODE++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}
