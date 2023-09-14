/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:18:06 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/05 18:35:24 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Marcelo vai passar na ";
	char	str12[] = "Marcelo vai passar na ";
	char	str2[] = "Piscine!!!!";

	printf("ft_strcat = %s\n", ft_strcat(str1, str2));
	printf("funcao original = %s", strcat(str12, str2));
}*/	
