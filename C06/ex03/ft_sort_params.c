/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:14:59 by cari              #+#    #+#             */
/*   Updated: 2024/02/11 21:41:02 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] == s2[counter])
		{
			counter++;
			continue ;
		}
		else
		{
			if (s1[counter] > s2[counter])
				return (1);
			else
				return (-1);
		}
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0' )
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = src[n];
	return (dest);
}

unsigned int	ft_strlen(char **str)
{
	int	counter;

	counter = 0;
	while (str[counter] != NULL)
		counter++;
	return (counter);
}

void	ft_sort_int_tab(char **tab)
{
	unsigned int	counter;
	char			*tmp;

	counter = 1;
	while (counter <= ft_strlen(tab) -2)
	{
		if (ft_strcmp(tab[counter], tab[counter +1]) == 1)
		{
			tmp = tab[counter];
			tab[counter] = tab[counter +1];
			tab[counter +1] = tmp;
			counter = 1;
			continue ;
		}
		counter++;
	}
}

int	main(int argc, char **argv)
{
	int	counter;

	counter = 1;
	if (argc == 1)
		return (0);
	else
	{
		ft_sort_int_tab(argv);
		while (argv[counter] != NULL)
		{
			write(1, argv[counter], 5);
			write(1, "\n", 1);
			counter++;
		}
		return (0);
	}
	return (0);
}
