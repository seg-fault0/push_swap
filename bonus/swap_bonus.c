/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:36:00 by wimam             #+#    #+#             */
/*   Updated: 2025/02/15 01:15:14 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_ps *arr)
{
	int	tmp;

	tmp = arr->arr_a[0];
	arr->arr_a[0] = arr->arr_a[1];
	arr->arr_a[1] = tmp;
}

void	sb(t_ps *arr)
{
	int	tmp;

	tmp = arr->arr_b[0];
	arr->arr_b[0] = arr->arr_b[1];
	arr->arr_b[1] = tmp;
}

void	ss(t_ps *arr)
{
	int	tmp;

	tmp = arr->arr_a[0];
	arr->arr_a[0] = arr->arr_a[1];
	arr->arr_a[1] = tmp;
	tmp = arr->arr_b[0];
	arr->arr_b[0] = arr->arr_b[1];
	arr->arr_b[1] = tmp;
}
