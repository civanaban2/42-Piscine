/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:49:57 by cari              #+#    #+#             */
/*   Updated: 2024/02/13 23:15:33 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	base_control(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int			my_base;
	long int	my_number;
	char		tmp;

	my_base = ft_strlen(base);
	my_number = nbr;
	if (my_base == 0 || my_base == 1)
		return ;
	if (base_control(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, &"-", 1);
		my_number = -my_number;
	}
	if (my_number >= my_base)
	{
		ft_putnbr_base(my_number / my_base, base);
	}
	tmp = base[my_number % my_base];
	write(1, &tmp, 1);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	base_control(char *base)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 1;
	while (base[c1] != '\0')
	{
		if (base[c1] == '+' || base[c1] == '-')
			return (0);
		if (base[c1] == '\t' || base[c1] == '\n' || base[c1] == '\v'
			|| base[c1] == '\f' || base[c1] == '\r' || base[c1] == ' ')
			return (0);
		while (base[c2] != '\0')
		{
			if (base[c1] != base[c2])
				c2++;
			else
				return (0);
		}
		c1++;
		c2 = c1 +1;
	}
	return (1);
}
