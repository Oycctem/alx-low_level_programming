#include <stdio.h>
#include <unistd.h>

/**
*main - entry point or the starting point of a c programs execution
*write function used to a print a string
*Return: retuning (1)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
