#include "search_algos.h"

/**
 *interpolation_search - searches for a value in a sorted array
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, (high = size - 1); high >= low;)
	{
		i = low + (((double)(high - low) / (array[high] - array[low])) 
				* (value - array[low]));
		if (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
