#include <stdio.h>

void p2(void);

int main()
{
	p2();
	int (*fun)();
	fun = main;
	printf("%x\n", *(char*)fun);
	return 0;
}