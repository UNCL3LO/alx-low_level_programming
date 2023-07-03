#include <ctype.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (islower(*ptr))
*ptr = toupper(*ptr); /* Convert lowercase to uppercase */
ptr++;
}
return (str);
}
