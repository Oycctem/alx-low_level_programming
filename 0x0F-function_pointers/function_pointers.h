#ifndef FUNCTION_POINTERS_h
#define FUNCTION_POINTERS_h

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);
#endif
