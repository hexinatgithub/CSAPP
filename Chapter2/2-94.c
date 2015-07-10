typedef unsigned float_bits;

float_bits float_twice(float_bits f){
	unsigned sign = f>>31;
	unsigned exponent = f>>23 & 0xff;
	unsigned frac = f & 0x7fffff;
	if (exponent == 0xff && frac != 0)
	{
		return f;
	}
	else if (exponent == 0)
	{
		exponent = exponent & (frac>>22);
		frac = (frac << 1) & 0x7fffff;
	}else if (exponent == 0xfe){
		exponent = exponent+1;
		frac = 0;
	}else{
		exponent += 1;
	}
	return (sign << 31) | (exponent << 23) | frac;
}