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

	printf("Size of char: %zu byte\n", sizeof(Achar));
	printf("Size of int: %zu bytes\n", sizeof(Bint));
	printf("Size of long int: %zu bytes\n", sizeof(Cint));
	printf("Size of long long int: %zu bytes\n", sizeof(Dint));
	printf("Size of float: %zu bytes\n", sizeof(Efloat));

	return (0);
}

