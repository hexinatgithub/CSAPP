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

void show_long(long x){
	show_bytes((byte_pointer)&x, sizeof(x));
}

int is_big_endian(){
	int a = 0x1;
	byte_pointer pointer = (byte_pointer)&a;
	return pointer[0] == 1;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", is_big_endian());
	return 0;
}