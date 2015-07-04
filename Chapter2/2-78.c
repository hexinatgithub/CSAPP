int mul5div8(int x){
	int sign = (x & INT_MIN) == INT_MIN;
	int bias = (7 + !sign) & 7;
	return ((x << 2 + x) + bias) >> 3;
}