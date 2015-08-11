void inner5(vec_ptr x, vec_ptr y, data_t *dest){
	long int i = 0;
	int length = vec_length(x);
	data_t *xdata = get_vec_start(x);
	data_t *ydata = get_vec_start(y);
	data_t sum_0 = (data_t) 0;
	data_t sum_1 = (data_t) 0;
	data_t sum_2 = (data_t) 0;

	for (i = 0; i < length-2; i += 3)
	{
		sum_0 = sum_0 + xdata[i] * ydata[i];
		sum_1 = sum_1 + xdata[i+1] * ydata[i+1];
		sum_2 = sum_2 + xdata[i+2] * ydata[i+2];
	}
	for(; i < length; i++)
		sum_0 = sum_0 + xdata[i] + ydata[i];

	*dest = sum_0 + sum_1 + sum_2;
}

/*
A:
应该是读取的性能受到了限制

B:
这个是寄存器溢出，导致有些数据在stack上面，这样就要频繁的去内存读取数据，导致速度变慢了。
*/