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

	printf("Size a of char: %zu byte\n", sizeof(Achar));
	printf("Size an of int: %zu bytes\n", sizeof(Bint));
	printf("Size a of long int: %zu bytes\n", sizeof(Cint));
	printf("Size a of long long int: %zu bytes\n", sizeof(Dint));
	printf("Size a of float: %zu bytes\n", sizeof(Efloat));

	return (0);
}

