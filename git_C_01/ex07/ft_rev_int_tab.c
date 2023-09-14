/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:40:44 by mfassbin          #+#    #+#             */
/*   Updated: 2023/08/30 21:19:24 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b; 
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - i)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;
	int	n;
	int	v;

	n = 10;
	i = 0;
	while(i < n)
	{
		printf("%i, ", array[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(array, n);
	v = 0;
	while(v < n)
	{
		printf("%i, ", array[v]);
		v++;
	}
	printf("\n");
}*/
