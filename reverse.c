/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:54:01 by wimam             #+#    #+#             */
/*   Updated: 2024/12/30 15:33:40 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_ps *arr)
{
	unsigned int	i;
	int	tmp;

	tmp = arr->arr_a[arr->size_a - 1];
	i = arr->size_a - 1;
	while (i > 0)
	{
		arr->arr_a[i] = arr->arr_a[i - 1];
		i--;
	}
	arr->arr_a[0] = tmp;
	ft_putstr("rra\n");
}

void	rrb(t_ps *arr)
{
	unsigned int	i;
	int	tmp;

	tmp = arr->arr_b[arr->size_b - 1];
	i = arr->size_b - 1;
	while (i > 0)
	{
		arr->arr_b[i] = arr->arr_b[i - 1];
		i--;
	}
	arr->arr_b[0] = tmp;
	ft_putstr("rrb\n");
}

void	rrr(t_ps *arr)
{
	unsigned int	i;
	int	tmp;

	if (arr->size_a > 1)
	{
		tmp = arr->arr_a[arr->size_a - 1];
		i = arr->size_a - 1;
		while (i > 0)
		{
			arr->arr_a[i] = arr->arr_a[i - 1];
			i--;
		}
		arr->arr_a[0] = tmp;
	}
	if (arr->size_b > 1)
	{
		tmp = arr->arr_b[arr->size_b - 1];
		i = arr->size_b - 1;
		while (i > 0)
		{
			arr->arr_b[i] = arr->arr_b[i - 1];
			i--;
		}
		arr->arr_b[0] = tmp;
	}
	ft_putstr("rrr\n");
}
