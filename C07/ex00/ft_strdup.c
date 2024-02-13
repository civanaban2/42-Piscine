/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:16:42 by cari              #+#    #+#             */
/*   Updated: 2024/02/13 17:45:02 by cari             ###   ########.fr       */
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
	ptr = (char *)malloc(counter * sizeof(char));
	counter = 0;
	while (src[counter])
	{
		ptr[counter] = src[counter];
		counter++;
	}
	return (ptr);
}
