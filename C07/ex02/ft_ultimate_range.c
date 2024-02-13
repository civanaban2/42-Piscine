/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:31:41 by cari              #+#    #+#             */
/*   Updated: 2024/02/13 20:47:09 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	counter;
	int	my_range;

	my_range = max - min;
	counter = 0;
	if (max > min)
		range[0] = (int *)malloc((max - min) * sizeof(int));
	else
		return (0);
	while (counter < my_range)
	{
		range[0][counter] = min;
		counter++;
		min++;
	}
	return (my_range);
}

#include <stdio.h>

int main(void)
{
	int **a;
	int counter = 0;

	printf("%d\n", ft_ultimate_range(a, 0, 5));
	while (a[0][counter] != '\0')
	{
		printf("%d\n", a[0][counter]);
		counter++;
	}
	return (0);
}