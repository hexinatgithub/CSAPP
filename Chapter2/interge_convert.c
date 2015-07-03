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

void show_int(int x){
	show_bytes((byte_pointer)&x, sizeof(x));
}

void show_float(float x){
	show_bytes((byte_pointer)&x, sizeof(x));
}

void show_pointer(void* x){
	show_bytes((byte_pointer)&x, sizeof(x));
}

int div16(int x){
	int bias = x >> 31 & 0xF;
	return (x + bias) >> 4;
}

int main(int argc, char const *argv[])
{
	// short s = -12345;
	// unsigned short us = s;	//53191
	// int i = us;
	// unsigned ui = s;
	// // unsigned int i2 = s;
	// printf("i = %d\n", i);
	// show_bytes((byte_pointer)&i, sizeof(i));
	// printf("ui = %u\n", ui);
	// show_bytes((byte_pointer)&ui, sizeof(ui));
	// // printf("i2 %d\n", i2);
	// // show_bytes((byte_pointer)&i2, sizeof(i2));
	// int a = 0xffffffff;
	// int b = 0x00000002;
	// int c = a+b;
	// printf("%d\n", c);
	// show_bytes((byte_pointer)&c, sizeof(c));
	// int a = -0x100;
	// show_bytes((byte_pointer)&a, sizeof(a));
	// long long l_a = a;
	// show_bytes((byte_pointer)&l_a, sizeof(l_a));
	// int c = pwr2k;
	printf("%d\n", div16(-32));
	return 0;
}