/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:24:04 by cari              #+#    #+#             */
/*   Updated: 2024/02/15 08:20:42 by cari             ###   ########.fr       */
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
	if (!ptr)
		return (0);
	while (counter < range)
		ptr[counter++] = min++;
	return (ptr);
}
