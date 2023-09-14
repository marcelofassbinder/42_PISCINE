/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:35:00 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/13 13:24:29 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	array = (int *) malloc(sizeof(int) * (max - min));
	*range = array;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!array)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (max - min);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int **range;
	int *arr;

	(void) argc;
	range = &arr;
	printf("%i\n", ft_ultimate_range(range,atoi(argv[1]), atoi(argv[2])));
	int i = 0;
	while (atoi(argv[2]) > atoi(argv[1])+ i)
	{		
		printf("%i",arr[i]);
		i++;
	}
}*/
