/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:13:08 by wimam             #+#    #+#             */
/*   Updated: 2025/01/02 17:13:30 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_ps *arr)
{
	unsigned int	i;
	int				tmp;

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

void	rra(t_ps *arr)
{
	unsigned int	i;
	int				tmp;

	tmp = arr->arr_a[arr->size_a - 1];
	i = arr->size_a - 1;
	while (i > 0)
	{
		arr->arr_a[i] = arr->arr_a[i - 1];
		i--;
	}
	arr->arr_a[0] = tmp;
	ft_putstr("rrb\n");
}
