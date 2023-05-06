#include "main.h"

/**
 * flip_bits - returns the number of bits to flip from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int bit_count = 0;

while (xor_result)
{
bit_count += xor_result & 1;
xor_result >>= 1;
}

return (bit_count);
}
