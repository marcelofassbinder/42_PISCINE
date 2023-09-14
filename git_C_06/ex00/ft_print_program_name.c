/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:44:51 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/10 19:05:34 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	(void) argc;
	i = 0;
	while (i < ft_strlen(argv[0]))
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
