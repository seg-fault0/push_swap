/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:43:22 by wimam             #+#    #+#             */
/*   Updated: 2025/01/07 13:21:00 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_arr(t_ps *arr, char **buffer)
{
	size_t	i;

	i = 0;
	while (++i < arr->size_a)
	{
		arr->arr_a[i] = ft_atoi(buffer[i + 1]);
		i++;
	}
}

int	check_dup(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
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
	arr->size_a = size - 1;
	ft_get_arr(arr, buffer);
	if (check_dup(arr->arr_a, arr->size_a))
		return (free(arr->arr_a), free(arr), NULL);
	arr->arr_b = malloc(size * sizeof(int));
	if (!arr->arr_b)
		return (free(arr->arr_a), free(arr), NULL);
	arr->size_b = 0;
	return (arr);
}

void	ft_exit(t_ps *arr)
{
	free(arr->arr_a);
	free(arr->arr_b);
	free(arr);
}
