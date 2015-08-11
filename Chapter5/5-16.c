void inner5(vec_ptr x, vec_ptr y, data_t *dest){
	long int i = 0;
	int length = vec_length(x);
	data_t *xdata = get_vec_start(x);
	data_t *ydata = get_vec_start(y);
	data_t sum = (data_t) 0;

	for (i = 0; i < length-2; i += 3)
	{
		sum = sum + xdata[i] * ydata[i] + xdata[i+1] * ydata[i+1] + xdata[i+2] * ydata[i+2];
	}
	for(; i < length; i++)
		sum = sum + xdata[i] + ydata[i];

	*dest = sum;
}

/*
A:For the case of integer addition as the combining operations cann't supply data fast enough.

B:
因为浮点数的乘法本来就不在主路径上面，因为浮点数可以满流水线进行计算，也就是每cycle可以进行一个新的浮点数计算，
那么浮点数的加法因为有依赖关系所以不能进行满流水计算，那么只能等到上一个加法计算完成才能进行下面的计算，那么限制就是加法的letancy bound.
*/