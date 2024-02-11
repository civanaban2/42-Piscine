/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:10:00 by cari              #+#    #+#             */
/*   Updated: 2024/02/06 21:17:01 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		counter;
	char	nbr;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (ft_char_is_printable(str[counter]) == 1)
			ft_putchar(str[counter]);
		else
		{
			nbr = str[counter];
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[nbr / 16]);
			ft_putchar("0123456789abcdef"[nbr % 16]);
		}
		counter++;
	}
}
