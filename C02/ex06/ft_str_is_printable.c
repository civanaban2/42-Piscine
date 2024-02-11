/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:02:09 by cari              #+#    #+#             */
/*   Updated: 2024/02/05 06:33:40 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	control;

	control = 0;
	while (str[control] != '\0')
	{
		if (str[control] >= 32 && str[control] < 127)
		{
			control++;
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
