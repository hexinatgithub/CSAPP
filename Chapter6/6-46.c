//CSAAPP 6.47

void transpose(int *dst, int *src, int dim){
	int i, j;

	for (i = 0; i < dim - 3; i += 4)
		for (j = 0; j < dim - 3; j += 4){
			dst[j*dim + i] = src[i*dim + j];
			dst[(j+1)*dim + i] = src[i*dim + j + 1];
			dst[(j+2)*dim + i] = src[i*dim + j + 2];
			dst[(j+3)*dim + i] = src[i*dim + j + 3];
			
			dst[j*dim + i + 1] = src[i*dim + dim j];
			dst[(j+1)*dim + i + 1] = src[i*dim + dim + j + 1];
			dst[(j+2)*dim + i + 1] = src[i*dim + dim + j + 2];
			dst[(j+3)*dim + i + 1] = src[i*dim + dim + j + 3];
			
			dst[j*dim + i + 2] = src[i*dim + 2*dim j];
			dst[(j+1)*dim + i + 2] = src[i*dim + 2*dim + j + 1];
			dst[(j+2)*dim + i + 2] = src[i*dim + 2*dim + j + 2];
			dst[(j+3)*dim + i + 2] = src[i*dim + 2*dim + j + 3];

			dst[j*dim + i + 3] = src[i*dim + 3*dim j];
			dst[(j+1)*dim + i + 3] = src[i*dim + 3*dim + j + 1];
			dst[(j+2)*dim + i + 3] = src[i*dim + 3*dim + j + 2];
			dst[(j+3)*dim + i + 3] = src[i*dim + 3*dim + j + 3];
		}
	for(; i < dim; ++i)
		for(; j < dim; ++i)
			dst[j*dim + i] = src[i*dim + j];
}