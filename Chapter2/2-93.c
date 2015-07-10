typedef unsigned float_bits;

float_bits float_half(float_bits f){
	unsigned sign = f>>31;
	unsigned exponent = f>>23 & 0xff;
	unsigned frac = f & 0x7fffff;
	if (exponent == 0xff && frac != 0)
	{
		return f;
	}
	else if (exponent == 0 || exponent == 1)
	{
		last_bit = frac & 1;
		frac = (last_bit == 0)? (frac>>1) : ((frac>>1) + !!(frac & 2));
	}else{
		exponent-=1;
	}
	return (sign << 31) | (exponent << 23) | frac;
}