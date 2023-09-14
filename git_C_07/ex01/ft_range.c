/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:12:06 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/12 16:27:36 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	array = (int *) malloc(sizeof(int) * (max - min));
	if (min >= max)
		array = 0;
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*a;
	int	i;

	(void) argc;
	a = ft_range(atoi(argv[1]), atoi(argv[2]));
	i = 0;
	while (i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%i ",a[i]);
		i++;
	}
}*/
