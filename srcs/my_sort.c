/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:38:20 by wimam             #+#    #+#             */
/*   Updated: 2025/02/15 21:22:18 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps *arr)
{
	int	tmp;

	tmp = arr->arr_a[0];
	arr->arr_a[0] = arr->arr_a[1];
	arr->arr_a[1] = tmp;
	ft_putstr("sa\n");
}

void	my_sort(t_ps *arr)
{
	int	max;

	max = get_nth_big_nbr(arr->arr_a, arr->size_a, arr->size_a);
	if (arr->size_a == 2 || max == arr->arr_a[2])
		return (sa(arr));
	if (arr->arr_a[0] == max)
		ra(arr);
	if (arr->arr_a[0] > arr->arr_a[1])
		return (sa(arr));
	if (arr->arr_a[0] < arr->arr_a[1] && max == arr->arr_a[2])
		return ;
	if (arr->arr_a[1] == max)
	{
		sa(arr);
		ra(arr);
	}
	if (arr->arr_a[0] > arr->arr_a[1])
		sa(arr);
}
