/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:40:33 by cari              #+#    #+#             */
/*   Updated: 2024/02/06 21:00:46 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		else if (str[control] >= 'A' && str[control] <= 'Z')
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
