/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:19:36 by wimam             #+#    #+#             */
/*   Updated: 2024/12/30 18:42:38 by wimam            ###   ########.fr       */
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
	i = -1;
	while (++i < size)
		if (arr[i] < arr[min_index])
			min_index = i;
	return (min_index);
}

void	ft_sort(t_ps *arr)
{
	int	min_index;

	while (arr->size_a > 0)
	{
		min_index = find_min_index(arr->arr_a, arr->size_a);
		if (min_index <= (int)(arr->size_a / 2))
			while (min_index-- > 0)
				ra(arr);
		else
			while (min_index++ < (int)arr->size_a)
				rra(arr);
		pb(arr);
	}
	while (arr->size_b > 0)
		pa(arr);
}
