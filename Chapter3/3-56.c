int loop(int x, int n){
	int result = 1431655765;
	int mask;
	for (mask = -2147483648; mask != 0; mask = (unsigned)mask >> (char)n ) {
		result ^= mask & x;
	}
	return result;
}