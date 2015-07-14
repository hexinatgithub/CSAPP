/*
CSAPP 3.62

A:M=19
B:i - %edi
  j - %ecx
*/

void transpose(int A[M][M]) {
	for (int i = 0; i < M; ++i)
	{
		int *Jptr = A[i][0];	//这个优化是从addl $76,%ebx可以看出，编译器在这里进行了优化，把每次计算A[J][I]优化为每次Jptr加上M，这样也得出了M=19
		for (int j = 0; j < i; ++j)
		{
			int t = A[i][j];
			A[i][j] = *Jptr;
			*Jptr = t;
			Jptr += 19;
		}
	}
}