/*
CSAPP 5.21

这道题使用公式
p[i] = p[i-1] + a[i] = p[i-2] + a[i-1] + a[i]
还可以使用更多的loop unroll。
*/

void psum(float a[], float p[], long int n){
	long int i;
	float val_E, val_O;
	float last_val_E = p[0] = a[0];
	float last_val_O = p[1] = a[1] + p[0];
	for (i = 2; i < n - 2; i = i + 2){
		val_E = last_val_E + a[i] + a[i-1];
		p[i] = val_E;
		last_val_E = val_E;
		val_O = last_val_O + a[i+1] + a[i];
		p[i+1] = val_O;
		last_val_O = val_O;
	}
	//把剩余的p[i]计算完全,因为loop unroll剩余的数目不会很多，我这里unroll2,所以最多剩余一个，没有必要引入临时变量。
	for(i; i < n; ++i){
		p[i] = p[i-1] + a[i];
	}
}