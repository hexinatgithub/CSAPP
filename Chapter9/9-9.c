static void place(void *bp, size_t asize)
{
	int size = GET_SIZE(HDRP(bp));
	if (size - asize >= 2*DSIZE)
	{
		//设置分配的free block
		char *hd = HDRP(bp);
		PUT(hd, PACK(asize, 1));
		char *ft = FTRP(bp);
		PUT(ft, PACK(asize, 1));
		//split remaind free block
		int remaind_size = size - asize;
		char *next_bp = NEXT_BLKP(bp);
		char *next_hd = HDRP(next_bp);
		PUT(next_hd, PACK(remaind_size, 0));
		char *next_ft = FTRP(next_bp);
		PUT(next_ft, PACK(remaind_size, 0));
	}
	else
	{
		PUT(HDRP(bp), PACK(asize, 1));
		PUT(FTRP(bp), PACK(asize, 1));
	}
}