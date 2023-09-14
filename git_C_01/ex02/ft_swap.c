/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:55:54 by mfassbin          #+#    #+#             */
/*   Updated: 2023/08/30 20:54:53 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
#include <stdio.h>
int	main(void)
{
	int	*d;
	int	*c;
	int	n1;
	int	n2;

	n1 = 42;
	n2 = 24;

	c = &n1;
	d = &n2; 

	printf("%i, %i\n", n1, n2);
	ft_swap(c, d);
	printf("%i, %i\n", n1, n2);
}*/
