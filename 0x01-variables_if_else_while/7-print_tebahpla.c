#include <stdio.h>

/**
* main - Prints the alphabet in lower case in reverse.
* Return: 0
*/

int main(void)
{
char letra;

for (letra = 'z' ; letra >= 'a' ; letra--)
{
putchar(letra);
}
putchar(10);
return (0);
}
