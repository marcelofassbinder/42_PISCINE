/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:43:50 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/13 19:15:26 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && (str[i + j] == to_find[j]))
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	while (i < argc)
	{
		printf("ft_strstr = %s\n", ft_strstr(argv[i], argv[i + 1]));
		printf("funcao original = %s\n", strstr(argv[i], argv[i + 1]));
		i = i + 2;
	}
	
}*/
