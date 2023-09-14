/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:23:11 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/13 13:38:48 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	tamtotal(char **strs, char *sep, int size)
{
	int	tam;
	int	i;

	i = 0;
	while (i < size)
	{
		tam = tam + ft_strlen(strs[i]);
		i++;
	}
	tam = tam + ((ft_strlen(sep)) * (size - 1));
	return (tam);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;

	if (size == 0)
		return (malloc(sizeof(char *)));
	ptr = (char *) malloc(sizeof(char) * tamtotal(strs, sep, size));
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char sep[] = "-->";	

	printf("%s", ft_strjoin((argc - 1), (argv + 1), sep));
}*/
