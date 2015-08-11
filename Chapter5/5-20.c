//CSAPP 5.20

double polym(double a[], double x, int degree){
	long int i;
	double result_0 = a[degree];
	double result_1 = a[degree-1]/x;
	double result_2 = a[degree-2]/x/x;
	for (i = degree-1; i >= 2; i = i-2){
		result_0 = a[i] + x * x * result_0;
		result_1 = a[i-1] + x * x * result_1;
		result_2 = a[i-1] + x * x * result_2;
	}
	for (i; i >=0; ++i){
		result_0 = x * result_0 + a[i];
		result_1 = x * result_1;
		result_2 = x * result_2;
	}
	return result_0 + result_1 + result_2;
}