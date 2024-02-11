/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:02:55 by cari              #+#    #+#             */
/*   Updated: 2024/02/08 16:55:54 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter1;
	unsigned int	counter2;
	unsigned int	result;

	counter1 = 0;
	counter2 = 0;
	result = 0;
	while (dest[counter1] != '\0')
		counter1++;
	while (src[result] != '\0')
		result++;
	if (size <= counter1)
		result += size;
	else
		result += counter1;
	while (src[counter2] != '\0' && (counter1 + 1) < size)
	{
		dest[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	dest[counter1] = '\0';
	return (result);
}
