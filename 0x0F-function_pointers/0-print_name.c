#include "function_pointers.h"

/**
 * print_name - a function that prints name
 *
 * @name: name of the person
 * @f: function pointer to print the name
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}
