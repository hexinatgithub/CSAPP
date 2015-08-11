void inner5(vec_ptr x, vec_ptr y, data_t *dest){
	long int i = 0;
	int length = vec_length(x);
	data_t *xdata = get_vec_start(x);
	data_t *ydata = get_vec_start(y);
	data_t sum = (data_t) 0;

	for (i = 0; i < length-2; i += 3)
	{
		sum = sum + (xdata[i] * ydata[i] + xdata[i+1] * ydata[i+1] + xdata[i+2] * ydata[i+2]);
	}
	for(; i < length; i++)
		sum = sum + xdata[i] + ydata[i];

	*dest = sum;
}