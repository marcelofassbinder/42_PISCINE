/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:01:47 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/09 14:47:58 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	original;

	original = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	while (i < power)
	{
		nb = nb * original;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_power(0, 0));
}*/
