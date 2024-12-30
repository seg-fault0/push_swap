/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:54:03 by wimam             #+#    #+#             */
/*   Updated: 2024/12/30 15:29:12 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_ps *arr)
{
	int	i;
	int	tmp;

	if (arr->size_a <= 1)
		return ;
	tmp = arr->arr_a[0];
	i = 0;
	while (i < arr->size_a - 1)
	{
		arr->arr_a[i] = arr->arr_a[i + 1];
		i++;
	}
	arr->arr_a[arr->size_a - 1] = tmp;
	ft_putstr("ra\n");
}

void	rb(t_ps *arr)
{
	int	i;
	int	tmp;

	if (arr->size_b <= 1)
		return ;
	tmp = arr->arr_b[0];
	i = 0;
	while (i < arr->size_b - 1)
	{
		arr->arr_b[i] = arr->arr_b[i + 1];
		i++;
	}
	arr->arr_b[arr->size_b - 1] = tmp;
	ft_putstr("rb\n");
}

void	rr(t_ps *arr)
{
	int	i;
	int	tmp;

	if (arr->size_a > 1)
	{
		tmp = arr->arr_a[0];
		i = 0;
		while (i < arr->size_a - 1)
		{
			arr->arr_a[i] = arr->arr_a[i + 1];
			i++;
		}
		arr->arr_a[arr->size_a - 1] = tmp;
	}
	if (arr->size_b > 1)
	{
		tmp = arr->arr_b[0];
		i = 0;
		while (i < arr->size_b - 1)
		{
			arr->arr_b[i] = arr->arr_b[i + 1];
			i++;
		}
		arr->arr_b[arr->size_b - 1] = tmp;
	}
	ft_putstr("rr\n");
}
