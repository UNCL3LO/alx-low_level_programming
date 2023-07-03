#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
/* Move the pointer to the end of the destination string */
while (*ptr != '\0')
ptr++;
/* Copy characters from src to dest until the end of src */
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
/* Add the terminating null byte at the end */
*ptr = '\0';
/* Return a pointer to the resulting string dest */
return (dest);
}
