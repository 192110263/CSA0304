#include <stdio.h>

void merge_Sort(int a[], int low, int mid, int high)
{
	int i, j, k, lo, temp[50];
   
	lo = low;
	i = low;
	j = mid + 1;
	while ((lo <= mid) && (j <= high))
	{
		if (a[lo] <= a[j])
		{
			temp[i] = a[lo];
			lo++;
		}
		else
		{
			temp[i] = a[j];
			j++;
		}
		i++;
	}
	
	if (lo > mid)
	{
		for (k = j; k <= high; k++)
		{
			temp[i] = a[k];
			i++;
		}
	}
	else
	{
		for (k = lo; k <= mid; k++)
		{
