#include <stdio.h>
#include "main.h"
/**
*_strlen - returns the lengthof a string
* @s: string
*Return: returns lenght;
*/
int _strlen(char *s)
{
int count, int;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
