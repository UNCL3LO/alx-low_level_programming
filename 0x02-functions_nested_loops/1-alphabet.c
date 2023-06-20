#!/bin/bash
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

