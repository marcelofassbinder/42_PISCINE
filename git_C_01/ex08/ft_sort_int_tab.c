/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:37:24 by mfassbin          #+#    #+#             */
/*   Updated: 2023/08/30 21:22:35 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j <= size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {48, 1, 59, -32, -8, 5};
	int	n;
	int	c;
	int	d;

	n = 6;
	c = 0;
	while (c < n)
	{
		printf("%i, ", array[c]);
		c++;
	}
	printf("\n");
	ft_sort_int_tab(array, 6);
	d = 0;
	while (d < n)
	{
		printf("%i, ", array[d]);
		d++;
	}
}*/
