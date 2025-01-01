/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:53:48 by wimam             #+#    #+#             */
/*   Updated: 2025/01/01 14:43:44 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
int	main(int argc, char *argv[])
{
	t_ps	*arr;

	arr = ft_init(argc, argv);

//	printf("*****BEFOR****\n");
//	for(int i = 0; i < arr->size_a; i++)
//		printf("%d ", arr->arr_a[i]);

//	printf("\n****INSTRUC****\n");
	ft_sort(arr);
	//swap_arrays(arr);

//	printf("\n******AFTER****\n");
//	for(int i = 0; i < arr->size_a; i++)
//		printf("%d ", arr->arr_a[i]);
	//ft_exit(arr);
}
//85 3 6 32 65 32 7 3

//