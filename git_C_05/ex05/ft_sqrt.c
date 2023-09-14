/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:37:19 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/10 17:08:54 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mult;

	mult = 0;
	while (mult <= nb && mult <= 46340)
	{
		if (mult * mult == nb)
			return (mult);
		else 
			mult++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_sqrt(2147395600));
}*/
