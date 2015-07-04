#include <stdio.h>

unsigned unsigned_high_prod(unsigned x, unsigned y);

int signed_high_prod(int x, int y){
	int high_bit = unsigned_high_prod(x, y);
	int bit_width = sizeof(int) << 2;
	unsigned x_w_1 = x << bit_width >> bit_width >> (bit_width - 1);
	unsigned y_w_1 = y << bit_width >> bit_width >> (bit_width - 1);
	high_bit -= (x_w_1 & y)+(y_w_1 & x);

}