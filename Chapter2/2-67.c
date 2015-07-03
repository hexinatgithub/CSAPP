#include <stdio.h>
#include <limits.h>

/* A: */
int int_size_at_least32_int_size_is_32(){
	int a = 0x80000000;
	return a == INT_MIN;
}

/* B: */
int int_size_at_least16_int_size_is_32(){
	int a = 0x8000;
	return a == INT_MIN;
}