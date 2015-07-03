 /*
	A:maxbytes-sizeof(val)总是大于等于零，因为sizeof()返回size_t是unsigned，所以maxbytes会被当成unsigned来进行计算，所以结果是unsigned，总是大于等于0
 */

void copy_int(int val, void *buf, int maxbytes){
	if (maxbytes > 0 && maxbytes >= sizeof(val))
		memcpy(buf, (void *) &val, sizeof(val));
}