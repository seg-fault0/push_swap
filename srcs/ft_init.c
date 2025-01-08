/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:43:22 by wimam             #+#    #+#             */
/*   Updated: 2025/01/08 12:50:53 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_get_arr_size(size_t count, char **buffer)
{
	size_t	i;
	size_t	j;
	size_t size;

	size = 0;
	i = 0;
	while(i < count)
	{
		j = 0;
		while (buffer[i][j])
		{
			while (buffer[i][j] && !is_num(buffer[i][j]))
				j++;
			if (buffer[i][j] && is_num(buffer[i][j]))
				size++;
			while (buffer[i][j] && is_num(buffer[i][j]))
				j++;
		}
		i++;
	}
	return (size);
}

void	ft_get_arr(t_ps *arr, size_t count, char **buffer)
{
	size_t	i;
	size_t	j;
	size_t	a;
	size_t size;

	size = 0;
	i = 0;
	a = 0;
	while(i < count)
	{
		j = 0;
		while (buffer[i][j])
		{
			while (buffer[i][j] && !is_num(buffer[i][j]) && !is_sign(buffer[i][j]))
				j++;
			if (buffer[i][j] && (is_num(buffer[i][j]) || is_sign(buffer[i][j])))
				arr->arr_a[a++] = ft_atoi(&buffer[i][j]);
			while (buffer[i][j] && (is_num(buffer[i][j]) || is_sign(buffer[i][j])))
				j++;
		}
		i++;
	}
}

t_ps	*ft_init(size_t argc, char **argv)
{
	t_ps	*arr;

	arr = malloc(sizeof(t_ps));
	if (!arr)
		return (NULL);
	arr->size_a = ft_get_arr_size(argc, argv);
	arr->size_b = 0;
	arr->arr_a = malloc(arr->size_a * sizeof(int));
	if (!arr->arr_a)
		return(free(arr), NULL);
	arr->arr_b = malloc(arr->size_a * sizeof(int));
	if (!arr->arr_b)
		return (free(arr->arr_a), free(arr), NULL);
	ft_get_arr(arr, argc, argv);
	return (arr);
}
