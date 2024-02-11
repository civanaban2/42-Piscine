/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:00:21 by cari              #+#    #+#             */
/*   Updated: 2024/01/30 03:33:38 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(int n, int *array);

void	zeros(int *array, int size);

void	control(int n, int *array);

void	ft_print_combn(int n)
{
	int		a[10];
	char	tmp;

	if (n == 1)
	{
		while (n <= 10)
		{
			tmp = (n - 1) + '0';
			write(1, &tmp, 1);
			if (n != 10)
				write(1, ", ", 2);
			n++;
		}
	}
	else
	{
		zeros(a, 10);
		while (a[0] != 10 - n)
		{
			control(n, a);
			printer(n, a);
			a[n -1]++;
		}
	}
}

void	printer(int n, int *array)
{
	char	tmp;
	int		counter;

	counter = 0;
	while (counter <= (n - 1))
	{
		tmp = '0' + array[counter];
		write(1, &tmp, 1);
		counter++;
	}
	if (array[0] != 10 - n)
		write(1, &", ", 2);
}

void	zeros(int *array, int size)
{
	int	counter;

	counter = 1;
	while (counter <= size)
	{
		array[counter -1] = 0;
		counter++;
	}
}

void	control(int n, int *array)
{
	int	counter;

	counter = 1;
	while (counter <= (n -1))
	{
		if (array[counter] <= array[counter -1])
		{
			array[counter]++;
			continue ;
		}
		if (array[counter] > 9)
		{
			array[counter] = 0;
			array[counter -1]++;
			counter = 1;
			continue ;
		}
		counter++;
	}
}
