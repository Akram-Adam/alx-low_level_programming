#include "holberton.h"

/**
 * print_name - prints a name.
 * @name: string to print.
i * @f: fuction to use.
 *
 * Return: NOTHING
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(f)(name);
}
