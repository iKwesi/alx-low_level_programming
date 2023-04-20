#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: th array containing elements
  * @size: the number of elements in array
  * @cmp: the function which compare values
  *
  * Return: pointer to the first corresponding element or
  * returns -1 if no element match or when size is less than zero
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
