#include <stdio.h>


unsigned rotate_right(unsigned x, int n){
	//把前(sizeof(x) << 3 - n)位和后面的n位移动到正确的位置与即可
	return (x << ((sizeof(x) << 3) -n)) | (x >> n);
}

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
	printf(" %.2x", start[i]);    //line:data:show_bytes_printf
    printf("\n");
}

int main(int argc, char const *argv[])
{
	int b = rotate_right(0x12345678, 20);
	show_bytes((byte_pointer)&b, sizeof(b));
	return 0;
}