/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:44:01 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/09 14:32:17 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	samechar(char *str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		i = j + 1;
		while (str[i] != '\0')
		{
			if (str[j] == str[i])
				return (1);
			else
				i++;
		}
		j++;
	}
	return (0);
}

void	ft_putnbr(long nb, char *base, long b)
{
	if ((nb / b) != 0)
		ft_putnbr((nb / b), base, b);
	nb = nb % b;
	write (1, &base[nb], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	b;
	long	i;
	long	nb;

	nb = (long) nbr;
	b = (long) ft_strlen(base);
	i = 0;
	while (base[i] && b > 1 && samechar(base) == 0
		&& base[i] != '-' && base[i] != '+')
	{
		i++;
	}
	if (base[i] != '\0' || *base == '\0')
		return ;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * (-1);
	}
	ft_putnbr(nb, base, b);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
}*/
