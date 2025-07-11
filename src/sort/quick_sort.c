#include <stdint.h>
#include <stddef.h>
#include "sort.h"
#include "utils.h"

size_t partition(int *ptr, size_t count)
{
	size_t ini = 0;
	for (size_t i = 0; i < count; i++)
	{
		if (ptr[i] <= ptr[count - 1])
		{
			swap(&ptr[i], &ptr[ini]);
			ini++;
		}
	}
	return ini - 1;
}

void quick_sort1(int *ptr, size_t count)
{
	if (count <= 1)
	{
		return;
	}
	size_t p = partition(ptr, count);
	quick_sort(ptr, p);
	quick_sort(ptr + p, count - p);
}

void quick_sort2(int *ptr, size_t count)
{
	while (count > 1)
	{
		size_t p = partition(ptr, count);
		if (p < (count - p - 1))
		{
			quick_sort(ptr, p);
			ptr += p + 1;
			count -= p + 1;
		}
		else
		{
			quick_sort(ptr + p + 1, count - p - 1);
			count = p;
		}
	}
}
