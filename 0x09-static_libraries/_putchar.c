#include <unistd.h>

/**
* _putchar - write the character c to standout
* @C: the character to print
* Return: 1 for success.
* on error, -1 is returnen and errno is set appropriately
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}

