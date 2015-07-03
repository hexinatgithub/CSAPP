#include <stdio.h>

//这里假设 0<=n<= w
int lower_bits(int x, int n){
	//一种方法，用一个变量把前(sizeof(int) << 3) -n个位全部为0，然后把后n个位全部置1，和x位与，得到后面的位
	// int a = (unsigned)-1 >> ((sizeof(int) << 3) - n);
	// return x & a;

	//第二种方法:
	//直接在x上面进行操作
	return (x << ((sizeof(int) << 3) - n)) >> n;
}

//test

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
	printf(" %.2x", start[i]);    //line:data:show_bytes_printf
    printf("\n");
}

int main(int argc, char const *argv[])
{
	int a = lower_bits(0x78abcdef, 8);
	show_bytes((byte_pointer)&a, sizeof(a));
	int b = lower_bits(0x78abcdef, 16);
	show_bytes((byte_pointer)&b, sizeof(b));
	return 0;
}