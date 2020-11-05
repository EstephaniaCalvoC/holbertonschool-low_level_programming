#include "holberton.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: Pointer to number.
 * @index: The index of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_idx;/*Maximum possible index*/
	const int bits_in_byte = 8;
	int value = 1; /*New value*/

	/*The maximun number supported by an unsigned long int is:*/
	/*max_uli: 18446744073709551615 for architectures of 64 bits.*/
	/*Therefore, the maximum number of digits that the binary of*/
	/*an unsigned long int is: Log2(18446744073709551615) = 64*/
	/*This the same to the number of bits soported for an unsigned*/
	/*long int = sizeof(unsigned long int) * 8bits*/

	max_idx = (sizeof(unsigned long) * bits_in_byte);

	if (index > max_idx)
		return (-1);

	/*Ubicate the new value in the indicated position*/
	value <<= index;

	/*Set value*/
	*n |= value;

	return (1);
}
