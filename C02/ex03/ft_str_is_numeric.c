/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 06:29:30 by cari              #+#    #+#             */
/*   Updated: 2024/02/05 06:33:43 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	control;

	control = 0;
	while (str[control] != '\0')
	{
		if (str[control] >= '0' && str[control] <= '9')
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
