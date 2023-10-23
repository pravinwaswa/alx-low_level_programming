#include "main.h"
/**
 *_memset - a function that fill a block of memory
 *@s: a starting address of memory to be filled
 *@b: a desired value
 *@n: the number of bytes to be changed
 *
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
