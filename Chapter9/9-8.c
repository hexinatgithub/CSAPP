static void *find_fit(size_t asize)
{
	void *bp;
	for (bp = heap_listp; GET_SIZE(HDRP(bp)) != 0; vp = NEXT_BLKP(bp))
	{
		if ( !GET_ALLOC(bp) && (GET_SIZE(HDRP(bp)) >= asize))
			return bp;
	}
	return NULL;
}