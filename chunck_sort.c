/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunck_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:09:51 by wimam             #+#    #+#             */
/*   Updated: 2025/01/06 19:18:11 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_chunk(t_ps *arr, int limit, int average)
{
	int	i;

	i = 0;
	while (i < arr->size_a)
	{
		if (arr->arr_a[0] <= limit)
		{
			pb(arr);
			if (arr->arr_b[0] <= average)
				rb(arr);
		}
		else
		{
			ra(arr);
			i++;
		}
	}
}

void	ft_push_to_b(t_ps *arr)
{
	int	limit;
	int	dif;
	int	average;

	limit = ft_get_limit(arr->arr_a, arr->size_a, 20);
	dif = limit - arr->arr_a[ft_get_min_index(arr->arr_a, arr->size_a)];
	average = limit - (dif / 2);
	while (arr->size_a > 0)
	{
		ft_push_chunk(arr, limit, average);
		limit = ft_get_limit(arr->arr_a, arr->size_a, 20);
		dif = limit - arr->arr_a[ft_get_min_index(arr->arr_a, arr->size_a)];
		average = limit - (dif / 2);
	}
}

void	ft_push_to_a(t_ps *arr)
{
	int	maxi;
	int	max_nbr;

	while (arr->size_b > 0)
	{
		maxi = ft_get_max_index(arr->arr_b, arr->size_b);
		max_nbr = arr->arr_b[maxi];
		while (1 == 1)
		{
			if (arr->arr_b[0] == max_nbr)
			{
				pa(arr);
				break ;
			}
			if (maxi > arr->size_b / 2)
				rrb(arr);
			else
				rb(arr);
		}
	}
}

void	chuck_sort(t_ps *arr)
{
	ft_push_to_b(arr);
	ft_push_to_a(arr);
}

/*

void	ft_push_to_a(t_ps *arr)
{
	int	maxi;
	int	max_nbr;
	int second_max;
	int lock;

	lock = 0;
	while (arr->size_b > 0)
	{
		maxi = ft_get_max_index(arr->arr_b, arr->size_b);
		max_nbr = arr->arr_b[maxi];
		second_max = ft_get_limit(arr->arr_b, arr->size_b, arr->size_b - 1);
		while (1 == 1)
		{
			if (arr->arr_b[0] == max_nbr)
			{
				pa(arr);
				if (lock == 1)
				{
					rra(arr);
					lock = 0;
				}
				break ;
			}
			else if (arr->arr_b[0] == second_max && lock == 0)
			{
				pa(arr);
				ra(arr);
				lock = 1;
				break ;
			}
			if (maxi > arr->size_b / 2)
				rrb(arr);
			else
				rb(arr);
		}
	}
}


*/