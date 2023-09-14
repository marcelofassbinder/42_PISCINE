/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:33:18 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/01 12:16:59 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str [0] - 32;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || (str[i] >= 58 && str[i] <= 64) 
			|| (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h> 

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%s\n", ft_strcapitalize(argv[i]));
		i++;
	}
}*/
