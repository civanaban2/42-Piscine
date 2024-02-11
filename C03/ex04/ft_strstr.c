/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:44:57 by cari              #+#    #+#             */
/*   Updated: 2024/02/08 16:55:56 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	if (to_find[counter2] == '\0')
		return (str);
	while (str[counter1] != '\0')
	{
		while (str[counter1 + counter2] == to_find[counter2]
			&& str[counter1 + counter2] != '\0')
			counter2++;
		if (to_find[counter2] == '\0')
			return (str + counter1);
		counter1++;
		counter2 = 0;
	}
	return (0);
}
