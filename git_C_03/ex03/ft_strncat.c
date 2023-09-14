/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:53:59 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/04 15:40:32 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest [i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[50] = "Meu avaliador vai passar na ";
	char	str12[50] = "Meu avaliador vai passar na ";
	char	str2[] = "Piscine!!!!";
	unsigned int	t;
	
	t = 20;
	printf("ft_strncat = %s\n", ft_strncat(str1, str2, t));
	printf("funcao original = %s", strncat(str12, str2, t));
}*/
