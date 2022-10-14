#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (for success)
 */
int main(void)
{
	int u;
	long int w;
	long long int x;
	char y;
	float z;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
