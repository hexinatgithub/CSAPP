#include <stdio.h>

int sum(int a, int b) {
	int s = a + b;
	printf("%p\n", &s);
	return s;
}

int main(int argc, char const *argv[])
{
	// return sum(1, 3);
	// int a = 10;
	// printf("%p\n", &a);
	// int b = 20;
	// int s = sum(a, b);
	// printf("%d\n", s);
	long int hehe = 9223372036854775807;
	printf("%lx\n", hehe);
	return 0;
}