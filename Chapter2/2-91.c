#include <stdio.h>
typedef unsigned float_bits;

float_bits float_absval(float_bits f){
	unsigned sign = f>>31;
	unsigned exponent = f>>23 & 0xff;
	unsigned frac = f & 0x7fffff;
	if (exponent == 0xff && frac != 0)
	{
		return f;
	}
	else if (sign == 1)
	{
		sign=0;
	}
	return (sign << 31) | (exp << 23) | frac;
}