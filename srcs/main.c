/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:53:48 by wimam             #+#    #+#             */
/*   Updated: 2025/02/15 01:20:42 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_ps *arr)
{
	if (arr->size_a <= 3)
		my_sort(arr);
	else if (arr->size_a < 20)
		selection_sort(arr);
	else
		chunck_sort(arr);
}

int	main(int argc, char *argv[])
{
	t_ps	*arr;

	if (argc == 1)
		return (0);
	arr = ft_init(argc - 1, argv + 1);
	if (!arr)
		return (1);
	ft_sort(arr);
	ft_exit(arr);
}
