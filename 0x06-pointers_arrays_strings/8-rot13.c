#include "holberton.h"
/**
 * rot13 - Encode a string using rot13.
 * @cod: string to change.
 * Return: Encode string.
 */
char *rot13(char *cod)
{
	int i, j;
	char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; cod[i] != '\0'; i++)
		for (j = 0; org[j] != '\0'; j++)
			if (cod[i] == org[j])
			{
				cod[i] = key[j];
				break;
			}
	return (cod);
}
