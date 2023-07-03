#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
char *dest_ptr = dest;
/* Find the end of the destination string */
while (*dest_ptr != '\0')
dest_ptr++;
/* Concatenate at most n characters from the source string */
while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
*dest_ptr = '\0'; /* Add null terminator to the concatenated string */
return (dest);
}
