#iclude "main"
include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to pprint
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
