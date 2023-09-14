/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:41:56 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/13 19:11:54 by mfassbin         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;
	unsigned int	j;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	i = d;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < d)
		return (size + s);
	return (d + s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[50] = "ola, ";
	char	src[] = "tudo bem?";
	unsigned int	i;

	i = 14;

	printf("ft_strlcat = %i\n", ft_strlcat(dest, src, i));
	printf("novo destino = %s\n", dest);
}*/
