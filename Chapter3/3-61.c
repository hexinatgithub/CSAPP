int var_prod_ele(int n, int A[n][n], int B[n][n], int i, int k){
	int *Arow = &A[i][0];
	int *Bptr = &B[0][k];
	int result = 0;
	int j;
	for (j = 0; j != n; j++){
		result += Arow[j] * *Bptr;
		n = n << 2; 	//因为n*4和n在寄存器的使用上面起了冲突，那么就保留n在寄存器里面，这样在要使用n*4的时候去计算它，还是这样n*4也可以保留在寄存器
		Bptr += n;
		n = n >> 2;		//当n*4使用完寄存器后，应该将寄存器还原为n，以便下次使用
	}
}