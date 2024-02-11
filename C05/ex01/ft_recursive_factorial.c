/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:38:57 by cari              #+#    #+#             */
/*   Updated: 2024/02/11 17:39:17 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc(int nb, int *ptr)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		calc(nb -1, ptr);
		*ptr = *ptr * nb;
	}
	return (*ptr);
}

int	ft_recursive_factorial(int nb)
{
	int	res;
	int	*ptr;

	ptr = &res;
	res = 1;
	return (calc(nb, ptr));
}
