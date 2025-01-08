/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:43:22 by wimam             #+#    #+#             */
/*   Updated: 2025/01/08 19:26:09 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	ft_get_arr_size(size_t count, char **buffer)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = 0;
	i = 0;
	while (i < count)
	{
		j = 0;
		while (buffer[i][j])
		{
			while (buffer[i][j] == ' ')
				j++;
			if (is_sign(buffer[i][j]))
				j++;
			if (!is_num(buffer[i][j]))
				return (ft_error(3), 0);
			size++;
			while (is_num(buffer[i][j]))
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
	size_t	size;

	size = 0;
	i = 0;
	a = 0;
	while (i < count)
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
	if (arr->size_a == 0)
		return (free(arr), NULL);
	arr->arr_a = malloc(arr->size_a * sizeof(int));
	if (!arr->arr_a)
		return (free(arr), NULL);
	ft_get_arr(arr, argc, argv);
	if (check_dup(arr->arr_a, arr->size_a))
		return (free(arr->arr_a), free(arr), NULL);
	arr->arr_b = malloc(arr->size_a * sizeof(int));
	if (!arr->arr_b)
		return (free(arr->arr_a), free(arr), NULL);
	arr->size_b = 0;
	return (arr);
}
