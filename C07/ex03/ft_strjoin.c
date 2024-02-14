/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 04:05:24 by cari              #+#    #+#             */
/*   Updated: 2024/02/14 17:29:14 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	total(int size, char **strs);

void	printer(int size, char **strs, char *sep, char *ptr);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *ptr;
	int	length_strs;
	int length_sep;

	length_strs = total(size, strs);
	length_sep = 0;
	while (sep[length_sep])
		length_sep++;
	ptr = (char *)malloc(length_strs + (size -1)*length_sep +1);
	printer(size, strs, sep, ptr);
	return (ptr);
}

int	total(int size, char **strs)
{
	int	counter;
	int	res;

	counter = 0;
	res = 0;
	while (counter < size)
	{
		while (strs[counter][res])
			res++;
		counter++;
	}
	return (res);
}

void	printer(int size, char **strs, char *sep, char *ptr)
{
	int counter;
	int i;
	int counter2;

	counter = 0;
	counter2 = 0;
	i = 0;
	while (counter < size)
	{
		while (strs[counter][i])
		{
			ptr[counter2] = strs[counter][i];
			i++;
			counter2++;
		}
		i = 0;
		counter++;
		if (counter != size)
		{
			while (sep[i])
			{
				ptr[counter2] = sep[i];
				i++;
				counter2++;
			}
		}
		i = 0;
	}
}
