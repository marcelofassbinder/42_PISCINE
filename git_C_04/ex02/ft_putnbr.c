/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:54:24 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/09 14:35:28 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb *(-1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	a = nb % 10 + '0';
	write(1, &a, 1);
}
/*
int	main(void)
{
	ft_putnbr(0);
}*/