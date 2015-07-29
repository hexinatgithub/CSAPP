//CSAPP 4.46
//A:

void bubble_a(int *data, int count){
	int i, next;
	for (next = 1; next < count; next++){
		for (i = next-1; i >= 0; i--){
			int temp_1 = data[i+1];
			int temp_0 = data[i];
			if (temp_1 < temp_0){		//如果用两个条件数据转移的话是可以的
				data[i+1] = temp_0;
				data[i] = temp_1;
			}
		}
	}
}