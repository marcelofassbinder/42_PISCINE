/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:52:17 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/03 18:13:15 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	destino[] = "essa string  sera substituida";
	char	destino2[] = "essa string  sera substituida";
	char	origem[] = "substituicao";
	char	*f;
	char	*man;

	printf("destino: %s\norigem: %s\n", destino, origem);
	f = ft_strncpy(destino, origem, 15);
	printf("ft_strncpy: %s\n", f);
	man = strncpy(destino2, origem, 15);
	printf("man strncpy: %s\n", man);
