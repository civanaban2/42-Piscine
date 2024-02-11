/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:49:57 by cari              #+#    #+#             */
/*   Updated: 2024/02/09 21:20:58 by cari             ###   ########.fr       */
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
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 1;
	while (base[counter1] != '\0')
	{
		while (base[counter2] != '\0')
		{
			if (base[counter1] != base[counter2])
				counter2++;
			else
				return (0);
		}
		counter1++;
		counter2 = counter1 +1;
	}
	return (1);
}
