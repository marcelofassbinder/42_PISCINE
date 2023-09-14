/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:21:05 by mfassbin          #+#    #+#             */
/*   Updated: 2023/08/31 23:07:07 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(int argc, char* argv[])
{
	int	i;
	
	i = 1;
	while (i < argc)
	{
		printf("%i\n", ft_str_is_uppercase(argv[i]));
		i++;
	}
}*/
