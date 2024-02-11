/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 06:24:31 by cari              #+#    #+#             */
/*   Updated: 2024/01/31 03:32:30 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	tmp;

	counter = 0;
	while (counter < (size / 2))
	{
		tmp = tab[counter];
		tab[counter] = tab[(size -1) - counter];
		tab[(size -1) - counter] = tmp;
		counter++;
	}
}
