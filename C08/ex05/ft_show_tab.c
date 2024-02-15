/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 07:16:31 by cari              #+#    #+#             */
/*   Updated: 2024/02/15 11:36:05 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	write(1, str, (counter));
}

void	ft_putint(int a)
{
	char	c;

	c = a + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	tmp;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	tmp = nb % 10 + '0';
	write(1, &tmp, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	idx;

	idx = 0;
	while (par[idx].str != 0)
	{
		ft_putstr(par[idx].str);
		ft_putnbr(par[idx].size);
		ft_putchar('\n');
		ft_putstr(par[idx].copy);
		idx++;
	}
}
