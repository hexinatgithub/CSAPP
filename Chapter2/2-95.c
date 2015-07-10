#include <stdio.h>
typedef unsigned float_bits;

float_bits float_i2f(int i){
	first_one_pos = 1;
	while((i != 0) && !((i<<1) & INT_MIN))
		first_one_pos++;
	if (i == 0)
		return 0;
	int exponent_bits = 32-first_one_pos;
	unsigned sign = f>>31;
	unsigned exponent = exponent_bits+127;
	unsigned frac = (unsigned)i << first_one_pos >>first_one_pos;
	if (exponent_bits <= 23)
	{
		frac = frac << (exponent_bits-23);
	}else
	{
		int of_bits = exponent_bits-23;
		int last_bits = (1 << of_bits) & frac;
		int over_flow_bits = ((1 << of_bits)-1) & frac;
		if (last_bits == 0)
		{
			int rd = (over_flow_bits >> (of_bits-1)) ? !!(over_flow_bits << 1) : 0;
			frac = (frac >> of_bits)+rd;
		}else{
			int rd = over_flow_bits >> (of_bits-1);
			frac = (frac >> of_bits)+rd;
		}
	}
	return (sign << 31) | (exponent << 23) | frac;
}