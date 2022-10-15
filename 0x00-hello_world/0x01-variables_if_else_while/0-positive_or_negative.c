#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * return 0 (for success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("if number is greater than 0: is positive/n");
	printf("if the number is 0: is zero/n");
	printf("if the number is less than 0: is negative/n");
	return (0);
}
