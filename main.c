/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:53:48 by wimam             #+#    #+#             */
/*   Updated: 2025/01/01 16:10:48 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
int	main(int argc, char *argv[])
{
	t_ps	*arr;

	arr = ft_init(argc, argv);
	printf("*****BEFOR****\n");
	for(int i = 0; i < arr->size_a; i++)
		printf("%d ", arr->arr_a[i]);

	printf("\n****INSTRUC****\n");
	ft_sort(arr);

	printf("\n******AFTER****\n");
	for(int i = 0; i < arr->size_a; i++)
		printf("%d ", arr->arr_a[i]);
	ft_exit(arr);
}
