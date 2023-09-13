#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - function that prints a name.
 *@name: chat
 *@f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
