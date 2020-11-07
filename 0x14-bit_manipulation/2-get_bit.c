#include "holberton.h"

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: Number to evaluate.
 * @index: Index to get the value.
 * Return: The value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max_idx;/*Maximum possible index*/
	const int bits_in_byte = 8;
	int bn; /*Binary number (bit)*/

	/*The maximun number supported by an unsigned long int is:*/
	/*max_uli: 18446744073709551615 for architectures of 64 bits.*/
	/*Therefore, the maximum number of digits that the binary of*/
	/*an unsigned long int is: Log2(18446744073709551615) = 64*/
	/*This the same to the number of bits soported for an unsigned*/
	/*long int = sizeof(unsigned long int) * 8bits*/

	max_idx = (sizeof(unsigned long) * bits_in_byte);

	if (index > max_idx)
		return (-1);

	/*The position in the binaries are reversed.*/
	/*The last number is in the index 0.*/

	/*Eliminate the last bit until reaching the indicated index.*/
	for (; index != 0; index--)
		n >>= 1;

	bn = n & 1;

	return (bn);
}
