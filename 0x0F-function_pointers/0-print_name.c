#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointer tht return zero
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
