#include <stdio.h>

int divide_power2(int x, int k){
	int bitsize = sizeof(int) << 3;
	int sx = x >> (bitsize - 1);
	//和书上的 (x < 0 ? x+y-1 : x) >> k的是一样的效果，遵守bit-level integer coding rules
	return (x + sx & ((1 << k)-1)) >> k;
}