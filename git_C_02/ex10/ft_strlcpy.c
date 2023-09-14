/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:53:15 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/02 14:24:04 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (src[i] != '\0')
		{
			if (i < size - 1)
				dest[i] = src[i];
			if (i >= size - 1)
				dest[i] = '\0';
			i++;
		}
		dest[i] = '\0';
		return (i);
	}
	if (size <= 0)
	{
		while (src[j] != '\0')
			j++;
	}
	return (j);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	destino[] = "banana";
	char	origem[] = "kiwi";
	unsigned int	tam;
	unsigned int	i;

	tam = 0;
	printf("origem = %s\ndestino = %s\n", origem, destino);
	i = ft_strlcpy(destino, origem, tam);
	printf("destino ft_strlcpy = %s\n", destino);
	printf("retorno = %i\n", i);;
}*/
