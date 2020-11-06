#include "holberton.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 * @n: Pointer to number.
 * @index: The index of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_idx;/*Maximum possible index*/
	const int bits_in_byte = 8;
	int mark = 1;/*Mark to identify an change the value*/

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
	mark <<= index;
	/*changes bits 0 to 1 and 1 to 0*/
	mark = (~mark);

	/*Set value*/

	*n &= mark;

	return (1);

}
