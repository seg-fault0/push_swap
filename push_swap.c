/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:43:22 by wimam             #+#    #+#             */
/*   Updated: 2024/12/30 17:50:51 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_arr(t_ps *arr, char **buffer)
{
	int	i;

	i = -1;
	while (++i < arr->size_a)
		arr->arr_a[i] = ft_atoi(buffer[i + 1]);
}

t_ps	*ft_init(int size, char **buffer)
{
	t_ps	*arr;

	arr = malloc(sizeof(t_ps));
	if (!arr)
		return (NULL);
	arr->arr_a = malloc(size * sizeof(int));
	if (!arr->arr_a)
		return (free(arr), NULL);
	arr->arr_b = malloc(size * sizeof(int));
	if (!arr->arr_b)
		return (free(arr->arr_a), free(arr), NULL);
	arr->size_a = size - 1;
	arr->size_b = 0;
	ft_get_arr(arr, buffer);
	return (arr);
}

void	ft_exit(t_ps *arr)
{
	free(arr->arr_a);
	free(arr->arr_b);
	free(arr);
}