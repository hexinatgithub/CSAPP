#include <stdio.h>
#include <limits.h>

int tsub_ovf(int x, int y){
	int sub = x - y;
	int s = (sizeof(int) << 3) -1;
	//当x为负,y为正，sub为正的时候结果溢出了，当x,y,sub的首位为1:0:0的时候结果negative overflow
	//当x为正,y为负，sub为负的时候结果溢出了，当x,y,sub的首位为0:1:1的时候结果positive overflow
	//其他情况下都要为0
	return  ((x >> s) && !(y >> s) && !(sub >> s)) | (!(x >> s) && (y >> s) && (sub >> s));
}

int main(int argc, char const *argv[])
{
	int a = tsub_ovf(INT_MAX, -10);
	printf("%d\n", a);
	return 0;
}