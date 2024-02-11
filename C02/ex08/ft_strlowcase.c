/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 01:21:35 by cari              #+#    #+#             */
/*   Updated: 2024/02/06 18:11:15 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	control;

	control = 0;
	while (str[control] != '\0')
	{
		if (str[control] >= 'A' && str[control] <= 'Z')
		{
			str[control] = str[control] +32;
		}
		control++;
	}
	return (str);
}
