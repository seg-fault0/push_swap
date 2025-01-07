/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:53:48 by wimam             #+#    #+#             */
/*   Updated: 2025/01/02 17:09:38 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_ps *arr)
{
	if (arr->size_a < 20)
		selection_sort(arr);
	else
		chuck_sort(arr);
}

int	main(int argc, char *argv[])
{
	t_ps	*arr;

	if (argc == 1)
		write(2, "ERROR\n", 7);
	arr = ft_init(argc, argv);
	if (!arr)
	{
		write(2, "ERROR\n", 7);
		return (0);
	}
	ft_sort(arr);
	ft_exit(arr);
}

/*

#include <stdio.h>
int	main(int argc, char *argv[])
{
	t_ps	*arr;

	if (argc == 1)
		write(2, "ERROR\n", 7);
	arr = ft_init(argc, argv);
	if (!arr)
	{
		write(2, "ERROR\n", 7);
		return(0);
	}
	ft_sort(arr);
	
	for(int i = 0; i < arr->size_a; i++)
		printf("%d ", arr->arr_a[i]);

	ft_exit(arr);
}

*/