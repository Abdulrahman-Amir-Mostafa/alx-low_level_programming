#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Achar;
	int Bint;
	long int Cint;
	long long int Dint;
	float Efloat;

	printf("Size of a char: %zu byte\n", (unsigned long)sizeof(Achar));
	printf("Size of an int: %zu bytes\n", (unsigned long)sizeof(Bint));
	printf("Size of a long int: %zu bytes\n", (unsigned long)sizeof(Cint));
	printf("Size of a long long int: %zu bytes\n", (unsigned long)sizeof(Dint));
	printf("Size of a float: %zu bytes\n", (unsigned long)sizeof(Efloat));

	return (0);
}

