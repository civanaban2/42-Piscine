/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 06:24:35 by cari              #+#    #+#             */
/*   Updated: 2024/01/30 23:58:13 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	tmp;

	counter = 0;
	while (counter <= size -1)
	{
		if (tab[counter] > tab[counter +1])
		{
			tmp = tab[counter];
			tab[counter] = tab[counter +1];
			tab[counter +1] = tmp;
			counter = 0;
			continue ;
		}
		counter++;
	}
}
