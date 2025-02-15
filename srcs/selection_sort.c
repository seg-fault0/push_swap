/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:32:17 by wimam             #+#    #+#             */
/*   Updated: 2025/02/15 00:38:18 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_ps *arr)
{
	size_t	min_index;

	while (arr->size_a > 1)
	{
		min_index = get_min_nbr_i(arr->arr_a, arr->size_a);
		if (min_index <= (arr->size_a / 2))
			while (min_index-- > 0)
				ra(arr);
		else
			while (min_index++ < arr->size_a)
				rra(arr);
		pb(arr);
	}
	while (arr->size_b > 0)
		pa(arr);
}
