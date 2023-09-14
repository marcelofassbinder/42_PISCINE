/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:44:23 by mfassbin          #+#    #+#             */
/*   Updated: 2023/08/30 20:58:12 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;

	n1 = *a;
	*a = *a / *b;
	*b = n1 % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	i1;
	int	i2;

	i1 = 10;
	i2 = 8;
	printf("c = %i, d = %i\n", i1, i2);
	ft_ultimate_div_mod(&i1, &i2);
	printf("c (divisao) = %i, d (modulo) = %i", i1, i2);
}*/
