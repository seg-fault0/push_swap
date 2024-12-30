/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:19:36 by wimam             #+#    #+#             */
/*   Updated: 2024/12/30 18:34:21 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(int *arr, unsigned int size)
{
	unsigned int	i;
	int				min;
	int				min_index;

	min = arr[0];
	min_index = 0;
	i = 1;
	while (i < size)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_index = i;
		}
		i++;
	}
	return (min_index);
}

void	ft_sort(t_ps *arr)
{
	int	min_index;

	while (arr->size_a > 0)
	{
		// Find the smallest element's index in arr_a
		min_index = find_min_index(arr->arr_a, arr->size_a);

		// Rotate arr_a until the smallest element is at the top
		if (min_index <= (int)(arr->size_a / 2))
		{
			while (min_index-- > 0)
				ra(arr);
		}
		else
		{
			while (min_index++ < (int)arr->size_a)
				rra(arr);
		}

		// Push the smallest element to arr_b
		pb(arr);
	}

	// Push everything back from arr_b to arr_a
	while (arr->size_b > 0)
		pa(arr);
}
