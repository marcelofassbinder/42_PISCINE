/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:18:57 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/03 16:30:46 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while(i < argc)
	{
		printf("Numero de caracteres da string: %i\n", ft_strlen(argv[i]));
		i++;
	}
}*/
