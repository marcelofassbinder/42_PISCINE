/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:06:03 by mfassbin          #+#    #+#             */
/*   Updated: 2023/08/31 22:55:34 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	destino[] = "aqui surgira uma nova string";
	char	origem[] = "ola, eu apareci";
	char	*f;

	printf("destino: %s\norigem: %s\n", destino, origem);

	f = ft_strcpy(destino, origem);

	printf("novo destino: %s", f);
}*/
