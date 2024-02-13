/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:24:04 by cari              #+#    #+#             */
/*   Updated: 2024/02/13 19:30:11 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	counter;
	int	range;

	range = max - min;
	counter = 0;
	if (max > min)
		ptr = (int *)malloc((max - min) * sizeof(int));
	else
		return (0);
	while (counter < range)
	{
		ptr[counter] = min;
		counter++;
		min++;
	}
	return (ptr);
}
