/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 07:09:35 by cari              #+#    #+#             */
/*   Updated: 2024/02/15 11:44:09 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *str);

int		ft_strlen(char *str);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ptr;
	int					counter;

	counter = 0;
	ptr = malloc((ac + 1) * (sizeof(struct s_stock_str)));
	if (!ptr)
		return (0);
	while (counter < ac)
	{
		ptr[counter].size = ft_strlen(av[counter]);
		ptr[counter].str = av[counter];
		ptr[counter].copy = ft_strdup(av[counter]);
		counter++;
	}
	ptr[counter].str = 0;
	return (ptr);
}

char	*ft_strdup(char *src)
{
	int		counter;
	char	*ptr;

	counter = 0;
	while (src[counter])
		counter++;
	ptr = (char *)malloc(counter +1);
	if (!ptr)
		return (0);
	counter = 0;
	while (src[counter])
	{
		ptr[counter] = src[counter];
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}
