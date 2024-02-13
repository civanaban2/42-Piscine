/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:58:31 by cari              #+#    #+#             */
/*   Updated: 2024/02/13 22:19:09 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	counter;

	counter = argc -1;
	if (argc != 1)
	{
		while (counter != 0)
		{
			write(1, argv[counter], ft_strlen(argv[counter]));
			write(1, "\n", 1);
			counter--;
		}
		return (0);
	}
	else
		return (0);
}

unsigned int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}
