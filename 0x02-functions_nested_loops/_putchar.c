#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the caracter to print
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropiately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
