//CSAPP 4.45
//A:

void bubble_a(int *data, int count){
	int i, next;
	for (next = 1; next < count; next++){
		for (i = next-1; i >= 0; i--){
			if (*(data+1) < *data){
				int t = *(data + 1);
				*(data + 1) = *data;
				*data = t;
			}
		}
	}
}