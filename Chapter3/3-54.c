int decode2(int x, int y, int z){
	int t1 = z-y;
	int t2 = t1;
	t2 = (t2 << 15) >> 15;
	int t3 = x ^ z;
	t2 = t3 * t2;
	return t2;
}