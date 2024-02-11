/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:58:45 by cari              #+#    #+#             */
/*   Updated: 2024/02/05 06:33:41 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	control;

	control = 0;
	while (str[control] != '\0')
	{
		if (str[control] >= 'a' && str[control] <= 'z')
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
