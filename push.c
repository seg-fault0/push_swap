/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:53:58 by wimam             #+#    #+#             */
/*   Updated: 2024/12/30 15:21:34 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_ps *arr)
{
	int	i;

	i = arr->size_a;
	while(i > 0)
	{
		arr->arr_a[i] = arr->arr_a[i - 1];
		i--;
	}
	arr->arr_a[i] = arr->arr_b[i];
	while(i < arr->size_b - 1)
	{
		arr->arr_b[i] = arr->arr_b[i + 1];
		i++; 
	}
	arr->size_a++;
	arr->size_b--;
	ft_putstr("pa\n");
}

void	pb(t_ps *arr)
{
	int	i;

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
	ft_putstr("pb\n");
}
