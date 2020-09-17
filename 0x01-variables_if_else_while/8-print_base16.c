#include <stdio.h>

/**
* main - Prints the hexageximal numbers.
* Return: 0
*/

int main(void)
{
char letra;

for (letra = '0' ; letra <= '9' ; letra++)
{
putchar(letra);
}

for (letra = 'a' ; letra <= 'f' ; letra++)
{
putchar(letra);
}

putchar(10);
return (0);
}
