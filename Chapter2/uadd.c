#include <stdio.h>
#include <limits.h>

/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y){
	unsigned sum = x + y;
	return sum >= x;
}

int tadd_ok(int x, int y){
	int sum = x + y;
	int pos_over = x > 0 && y > 0 && sum < 0;
	int nev_over = x < 0 && y < 0 && sum >= 0;
	return !pos_over && !nev_over;
}

int main(int argc, char const *argv[])
{
	return 0;
}