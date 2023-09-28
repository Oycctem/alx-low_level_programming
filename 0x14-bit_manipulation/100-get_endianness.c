#include "main.h"
/**
 *get_endianness - function that checks the endiannes
 *Return: returns 1 if the system is little edian or 0 if its big
 */
int get_endianness(void)
{
	unsigned int i = 1;

	if (*(unsigned char *)&i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
