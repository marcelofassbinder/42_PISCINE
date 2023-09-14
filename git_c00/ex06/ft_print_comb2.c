/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:55:23 by mfassbin          #+#    #+#             */
/*   Updated: 2023/09/01 12:38:10 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	convert_int_char(int n)
{
	char	a;
	char	b;

	a = n / 10 + '0';
	b = n % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			convert_int_char(n1);
			write(1, " ", 1);
			convert_int_char(n2);
			if (!(n1 == 98 && n2 == 99))
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
}

