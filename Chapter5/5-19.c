//CSAPP 5.19

//还可以用书上的basic_memset来进行简化，思路是利用书上的函数完成内存对齐和处理剩余的内存操作。这里不列出来了。
void *basic_memset(void *s, int c, size_t n){
	size_t cnt = 0;
	//地址起始地址
	unsigned long *slong = s;
	//设置数据
	unsigned long data = (unsigned char)c;
	data = data[56] | (data << 48) | (data << 40) | (data << 32) | (data << 24) | (data << 16) | (data << 8);

	//对齐的长度
	size_t aligned = sizeof(unsigned long);
	//使开始进行unsigned long进行数据设置的时候对齐内存地址
	if((unsigned)s % sizeof(unsigned long)){
		unsigned char *schar = s;
		size_t times = aligned - (unsigned)s % aligned;
		while(cnt < times){
			*schar++ = (unsigned char) c;
			cnt++;
		}
		slong = (unsigned long *)schar;
	}

	//数据设置
	while(cnt < n-3){
		*slong++ = data;
		cnt = cnt + 4;
	}
	//finish the last few iterations
	unsigned char *schar = slong;
	while(cnt < n){
		*schar++ = (unsigned char)c;
		cnt++;
	}
	return s;
}