#include <stdio.h>

int cread(int *xp){
	return (xp ? *xp : 0);
}

int main(int argc, char const *argv[])
{
	// int a = 0xffffffe0;
	// printf("%d\n", a);
	int* a = NULL;
	printf("%d\n", cread(a));
	return 0;
}