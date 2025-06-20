#include <stdint.h>
#include <stddef.h>
#include "utils.h"

void swap(int *a, int *b)
{
	if (a == b)
	{
		return;
	}
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}