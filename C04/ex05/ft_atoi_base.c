/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:34:49 by cari              #+#    #+#             */
/*   Updated: 2024/02/13 20:14:18 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi_base(char *str, char *base)
{
	int		counter;
	int		mark;
	int		nbr;
	int		my_base;
	
	my_base = ft_strlen(base);
	mark = 1;
	nbr = 0;
	counter = 0;
	if (my_base == 0 || my_base == 1)
		return ;
	if (base_control(base) == 0)
		return ;
	while (str[counter] == '\t' || str[counter] == '\n' || str[counter] == '\v'
		|| str[counter] == '\f' || str[counter] == '\r' || str[counter] == ' ')
		counter++;
	while (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			mark = -mark;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		nbr *= 10;
		nbr += str[counter] - '0';
		counter++;
	}
	nbr = mark * nbr;
	return (nbr);
}