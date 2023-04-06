#include"main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: a string
 */

void _puts_recursion(char *s)
{
    if (s == ""){
        putchar('\n');
    }
    _putchar(*s);
    _puts_recursion(s+1);  
}