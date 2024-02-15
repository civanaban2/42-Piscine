/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:16:42 by cari              #+#    #+#             */
/*   Updated: 2024/02/15 08:19:19 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
