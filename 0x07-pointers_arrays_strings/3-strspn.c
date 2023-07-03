#include "main.h"
#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The characters to accept
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
while (*s)
{
found = 0;
for (; *accept; accept++)
{
if (*s == *accept)
{
count++;
found = 1;
break;
}
}
if (!found)
break;
s++;
accept = accept - count;
}
return count;
}
