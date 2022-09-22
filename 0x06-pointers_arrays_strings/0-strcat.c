#include <stdio.h>
#include "main.h"
/**
 * _strcat - appends the strings @src and @dest
 * @src: source 
 * @dest: destination
 * 
 * Return: pointer to dest string
*/
char *_strcat(char *dest,char *src)
{
	int i=0;
	int count=0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (count >= 0)
	{
		*(dest + i) = *(src + count);
		if (*(src + count) == '\0')
  			break;
		i++;
		count++;
	}
	return (dest);
}
