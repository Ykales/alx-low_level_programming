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

	printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(u));
	printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(w));
	printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(x));
	printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
