#include <stdio.h>

int fun4(int x){
	if (x - 1 <= 0)
		return 1;
	return fun4(x - 1)+fun4(x - 2);
}

int main(int argc, char const *argv[])
{
	int val = fun4(9);
	printf("%d\n", val);
	return 0;
}