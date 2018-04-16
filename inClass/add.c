int rsum (int *Start, int Count)
{
	if(Count <= 0)
		return 0;
	return *Start + rsum(Start+1, Count -1);
}
