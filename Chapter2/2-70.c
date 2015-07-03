#include <stdio.h>

int fits_bits(int x, int n){
	/*
	如果用n-bit的two_complete来表示x的话，如果可以容下x的值，则有两种情况:
	第一种情况:w--(n+1)位全为1，且n-bit的符号为也为1，则w--n位全为1
	第二种情况:w--(n+1)位全为0，且n-bit的符号位也为0，则w--n位全为0
	*/

	//右移n-1保存w-n位的值
	int a = (unsigned)x >> (n - 1);
	//前n-1个置0，其他全为1
	int b = (unsigned)-1 >> (n - 1);
	//看是否全为0，或者全为1,返回1,其他情况则返回0
	return (a == 0) | ((a ^ b) == 0);
}