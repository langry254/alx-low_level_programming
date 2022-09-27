#include "main.h"
/**
 * _memeset - fills the memory with constant byte
 * @s: Returns a pointer to memory area
 * @b: value to be set
 * @n: number of bytes in the memory
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for(i=0; i<n; i++)
	{
		*(s+i) = b;

	}

	return(s);
}
