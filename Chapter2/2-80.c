/*
CSAPP 2-80.c
*/

#include <stdio.h>

int a(int n){
	return -1 << n;
}

int b(int m, int n){
	int bitsize = sizeof(int) << 3;
	//先产生1(w-m)0(m)，然后产生1(w-n-m)0(m+n),将其异或则产生0(w-n-m)1(n)0(m)
	return (-1 << m) ^ (INT_MIN >> (bitsize-m-n-1));
}