/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 01:22:46 by cari              #+#    #+#             */
/*   Updated: 2024/02/05 07:37:15 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strupcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	ft_strupcase(str);
	while (str[counter] != '\0')
	{
		if (counter != 0)
		{
			if (str[counter] >= 'A' && str[counter] <= 'Z')
			{
				if (str[counter -1] >= '0' && str[counter -1] <= '9')
					str[counter] = str[counter] +32;
				else if (str[counter -1] >= 'A' && str[counter -1] <= 'Z')
					str[counter] = str[counter] +32;
				else if (str[counter -1] >= 'a' && str[counter -1] <= 'z')
					str[counter] = str[counter] +32;
			}
		}
		counter++;
	}
	return (str);
}

void	ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] = str[counter] -32;
		counter++;
	}
}
