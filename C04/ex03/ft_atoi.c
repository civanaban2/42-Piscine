/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:57:55 by cari              #+#    #+#             */
/*   Updated: 2024/02/09 21:31:17 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		counter;
	int		mark;
	int		nbr;

	mark = 1;
	nbr = 0;
	counter = 0;
	while (str[counter] == 't' || str[counter] == '\n' || str[counter] == '\v'
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
