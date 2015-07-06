#include <stdio.h>

int float_ge(float x, float y){
	unsigned ux = f2u(x);
	unsigned uy = f2u(y);
	unsigned sx = ux >> 31;
	unsigned sy = uy >> 31;
	/*
	如果符号位都为正数的情况下，那么exponent filed比较大的数，那么数值就会比较大，因为fraction field代表的值为1.*，小数右移一位一定比分数部分的和要大
	如果exponent filed的值相同，那就比较fraction field的值就可以确定大小,如果都相同那么就相等。
	那么如果符号位的值不全为正数的情况下呢？
	如果一正一负：那么值更大的那个一定为负数。
	如果两个负数：那么值更大的那一个一定为更小的值。因为在float point中exponent filed和fraction field的值越大，符号位为1，值就越小。
	所以总结出在符号位不全为正的情况下，更大的那一个一定是最小的，所以!(ux > uy),指ux>uy的时候一定x比y小，当ux<=uy的时候，x则大于等于y.
	*/
	return (sx > 0 && sy > 0) ? (ux >= uy) : !(ux > uy);
}