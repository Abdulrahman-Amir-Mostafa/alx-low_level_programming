#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: This program will assign a random number to
 * the variable n each time it is executed.
 * Return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("is %i and is greater than 5\n",n);
	else if (1 =< n < 6) 
		printf("is %i and is less than 6 and not 0\n",n);
	else
	       	printf("is %i and is 0\n",n);
	return (0);
}
