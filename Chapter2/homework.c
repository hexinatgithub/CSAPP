#include <stdio.h>
#include <string>
#include <limits.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){
	int i;
	for (int i = 0; i < len; ++i)
	{
		printf("%.2x ", start[i]);
	}
	printf("\n");
}

int h_2_59(int x, int y){
	printf("%d\n", 0xF0000000 & y);
	printf("%d\n", 0x0FFFFFFF & x);
	return (y & 0xF0000000) + (x & 0x0FFFFFFF);
}

unsigned put_byte(unsigned x, unsigned char b, int i){
	x = x - ( x & (0x000000ff << (i*8) ) );
	int ib = b;
	x += ib << (i*8);
	return x;
}

int int_shifts_are_logical(){
	return (INT_MIN >> ( (sizeof(int)<<3) - 1)) == -1;
}

int sra(int x, int k){
	int xsrl = (unsigned)x >> k;
	int k_s = -1 << ( (sizeof(x)<<3) - k - 1);
	int s_a = -(xsrl & k_s);
	return s_a | xsrl;
}

unsigned srl(unsigned x, int k){
	unsigned xsra = (int) x >> k;
	int k_s = -1 << ( (sizeof(x)<<3) - k);
	return (k_s & xsra) ^ xsra;
}

int main(int argc, char const *argv[])
{
	// printf("%d\n", h_2_59(0x1, 0xF0000000));
	// int x = put_byte(0x12345678, 0xAB, 0);
	int x = srl(0x82345678, 12);
	show_bytes((byte_pointer)&x, sizeof(x));
	return 0;
}