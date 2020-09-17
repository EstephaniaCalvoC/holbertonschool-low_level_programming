#include <stdio.h>

/**
* main - Prints the alphabet in lower case.
* Return: 0
*/

int main(void)
{

char letra_i, letra_f;

letra_i = 'a';
letra_f = 'z';

while (letra_i <= letra_f)
{
putchar(letra_i);
letra_i++;
if (letra_i == 123)
{
letra_i = 'A';
letra_f = 'Z';
}
}
putchar(10);
return (0);
}
