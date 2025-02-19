/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rotate_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:54:03 by wimam             #+#    #+#             */
/*   Updated: 2025/02/17 05:43:47 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_ps *arr)
{
	size_t	i;

	i = arr->size_a;
	while (i > 0)
	{
		arr->arr_a[i] = arr->arr_a[i - 1];
		i--;
	}
	arr->arr_a[i] = arr->arr_b[i];
	while (i < arr->size_b - 1)
	{
		arr->arr_b[i] = arr->arr_b[i + 1];
		i++;
	}
	arr->size_a++;
	arr->size_b--;
}

void	pb(t_ps *arr)
{
	size_t	i;

	i = arr->size_b;
	while (i > 0)
	{
		arr->arr_b[i] = arr->arr_b[i - 1];
		i--;
	}
	arr->arr_b[0] = arr->arr_a[0];
	i = 0;
	while (i < arr->size_a - 1)
	{
		arr->arr_a[i] = arr->arr_a[i + 1];
		i++;
	}
	arr->size_b++;
	arr->size_a--;
}

void	ra(t_ps *arr)
{
	size_t	i;
	int		tmp;

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
}

void	rb(t_ps *arr)
{
	size_t	i;
	int		tmp;

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
}
