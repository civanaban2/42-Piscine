/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:09:37 by cari              #+#    #+#             */
/*   Updated: 2024/01/30 03:21:23 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first < second)
	{
		second = first +1;
		while (second <= 99)
		{
			ft_putnbr(first);
			write(1, &" ", 1);
			ft_putnbr(second);
			if (first != 98)
				write(1, &", ", 2);
			second++;
		}
		first++;
	}
}

void	ft_putnbr(int nb)
{
	char	tmp;

	tmp = (nb / 10) % 10 + '0';
	write(1, &tmp, 1);
	tmp = nb % 10 + '0';
	write(1, &tmp, 1);
}
