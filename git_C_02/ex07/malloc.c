//header
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = max - min + 1;
	arr = (int *) malloc(sizeof(int) * size);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*arr;
	int	i;

	(void) argc;
	i = 0;
	arr = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (arr[i])
	{
		printf("%i, ", arr[i]);
		i++;
	}
}
