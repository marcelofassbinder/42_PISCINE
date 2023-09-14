/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:05:21 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/11 16:32:20 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
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

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*d;
	int		size;

	if (src == NULL)
		return (0);
	size = ft_strlen(src) + 1;
	d = (char *) malloc(sizeof(char) * size);
	ft_strcpy(d, src);
	return (d);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s = ft_strdup("");
	printf("%s", s);
}*/
