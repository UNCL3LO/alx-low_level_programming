#include <ctype.h>
#include <stddef.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize = 1;
while (*ptr != '\0')
{
if (capitalize && islower(*ptr))
*ptr = toupper(*ptr); /* Capitalize the current letter */
capitalize = 0;
if (is_separator(*ptr))
capitalize = 1; /* Set capitalize flag for the next letter */
ptr++;
}
return (str);
}
