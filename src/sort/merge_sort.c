#include <stdint.h>
#include <stddef.h>
#include "sort.h"

void merge(int *ptr, size_t lcount, size_t rcount)
{
	int tmp[lcount + rcount];
	for (size_t i = 0; i < lcount; i++)
	{
		tmp[i] = ptr[i];
	}
	for (size_t i = 0; i < rcount; i++)
	{
		tmp[lcount + rcount - (i + 1)] = ptr[lcount + i];
	}

	size_t i = 0, j = lcount + rcount - 1;
	for (size_t c = 0; c < sizeof(tmp) / sizeof(int); c++)
	{
		if (tmp[i] <= tmp[j] && i < lcount)
		{
			ptr[c] = tmp[i];
			i++;
		}
		else
		{
			ptr[c] = tmp[j];
			j--;
		}
	}
}

void merge_sort(int *ptr, size_t count)
{
	if (count <= 1)
	{
		return;
	}
	merge_sort(ptr, count / 2);
	merge_sort(ptr + count / 2, (count + 1) / 2);
	merge(ptr, count / 2, (count + 1) / 2);
}