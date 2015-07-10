//csapp 2.89

flaot fpwr2(int x){
	unsigned exp, frac;
	unsigned u;

	if (x < -149)
	{
		//Too small.Return 0.0
		exp = 0;
		frac = 0;
	}else if (x < -126)
	{
		//Denormalized result
		exp = 0;
		frac = 1 << (x+149);
	}else if (x < 128)
	{
		//Normalized result
		exp = x+127;
		frac = 0;
	}else{
		// Too big.Return +oo
		exp = 0xFF;
		frac = 0;
	}

	/* Pack exp and frac into 32 bit */
	u = exp << 23 | frac;
	/* Return as float */
	return u2f(u);
}