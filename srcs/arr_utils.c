/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:38:36 by wimam             #+#    #+#             */
/*   Updated: 2025/02/05 14:18:16 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	get_min_nbr_i(int *arr, size_t size)
{
	size_t	i;
	size_t	min_index;

	min_index = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] < arr[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}

size_t	get_max_nbr_i(int *arr, size_t size)
{
	size_t	i;
	size_t	max_index;

	max_index = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] > arr[max_index])
			max_index = i;
		i++;
	}
	return (max_index);
}

int	get_nth_big_nbr(int *arr, size_t size, int max)
{
	size_t	i;
	size_t	j;
	int		check;

	i = 0;
	check = 0;
	while (i < size)
	{
		j = 0;
		check = 0;
		while (j < size)
		{
			if (arr[i] > arr[j])
				check++;
			j++;
		}
		if (check == max - 1)
			return (arr[i]);
		i++;
	}
	return (arr[i]);
}

int	check_dup(int *arr, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (ft_error(1), 1);
			j++;
		}
		i++;
	}
	return (0);
}
