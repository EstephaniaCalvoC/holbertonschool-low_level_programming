#include <stdio.h>

/**
* main - Prints the all single numbers of base 10.
* Return: 0
*/

int main(void)
{
char letra;

for (letra = '0' ; letra <= '9' ; letra++)
{
putchar(letra);
}
putchar(10);
return (0);
}
