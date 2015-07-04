//CSAPP 2.79
#include <stdio.h>
#include <limits.h>

// int mul5div8(int x){
// 	int sign = (x & INT_MIN) == INT_MIN;
// 	int bias1 = (sign && (x & 1));
// 	int bias2 = (~(sign && (x & 7))+1) & 7;
// 	int tail = ((x & 1) << 2) + (x & 7);
// 	int remain = tail >> 3;
// 	int fraction = (sign ^ remain) - sign;
// 	printf("%d\n", fraction);
// 	return ((x + bias1) >> 1) + ((x + bias2) >> 3) + fraction;
// }

//这道题想了一天没想通。。。放弃，下面是网上的答案
int fiveeighths(int x)
{
    int sign = x & INT_MIN;
    int tail = ((x & 1) << 2) + (x & 7);
    int base = (x >> 1) + (x >> 3);
    //这道题关键可能是在溢出的那3位，后面的这个(sign && (tail & 7))没搞懂什么情况，放弃放弃(好不甘心啊，想了我一天)
    int bias = (tail >> 3) + (sign && (tail & 7));
 	printf("%d:%d\n", base, bias);
    return base + bias;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", 0x80000007);
	int a = fiveeighths(-47);
	printf("%d\n", a);
	return 0;
}