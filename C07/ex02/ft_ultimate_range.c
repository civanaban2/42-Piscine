/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:31:41 by cari              #+#    #+#             */
/*   Updated: 2024/02/15 08:21:53 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	counter;
	int	my_range;

	my_range = max - min;
	counter = 0;
	if (max > min)
		ptr = (int *)malloc((max - min) * sizeof(int));
	else
	{
		*range = NULL;
		return (0);
	}
	if (!ptr)
		return (-1);
	while (counter < my_range)
		ptr[counter++] = min++;
	*range = ptr;
	return (my_range);
}
