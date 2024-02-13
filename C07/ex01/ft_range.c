/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:24:04 by cari              #+#    #+#             */
/*   Updated: 2024/02/13 14:46:22 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	counter;

	counter = 0;
	if (max > min)
		ptr = (int *)malloc((max - min) * sizeof(int));
	else
		return	(0);
	while (ptr[counter] != '\0')
	{
		ptr[counter] = min;
		counter++;
		min++;
	}
	return (ptr);
}
