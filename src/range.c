#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end) {
	int	index;
	int	bound;
	int	*array;
	int	minus;

	minus = 1;
	if (end < start)
		minus *= -1;
	if (minus > 0)
		bound = end - start + 1;
	else
		bound = start - end + 1;
	array = (int *)malloc(bound * sizeof(int));
	index = 0;
	while (index < bound) {
		array[index] = start + index * minus;
		index++;
	}
	return (array);
}

int main(int argc, char **argv) {
	int start = 1;
	int end = 11; 

	int * arr;

	arr = ft_range(start, end);

	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
	}

}
	
