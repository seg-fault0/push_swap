/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:19:36 by wimam             #+#    #+#             */
/*   Updated: 2024/12/31 17:29:02 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(int *arr, unsigned int size)
{
	unsigned int	i;
	int				max_index;

	max_index = 0;
	i = -1;
	while (++i < size)
		if (arr[i] > arr[max_index])
			max_index = i;
	return (max_index);
}

void	ft_sort(t_ps *arr)
{
	int	max_index;

	while (arr->size_a > 0)
	{
		max_index = find_max_index(arr->arr_a, arr->size_a);
		if (max_index <= (int)(arr->size_a / 2))
			while (max_index-- > 0)
				ra(arr);
		else
			while (max_index++ < (int)arr->size_a)
				rra(arr);
		pb(arr);
	}
}
