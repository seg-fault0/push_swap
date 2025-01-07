/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:06:00 by wimam             #+#    #+#             */
/*   Updated: 2025/01/07 14:13:16 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
	t_ps *arr;
	if (argc <= 1)
		return (1);
	
	arr = ft_arr_init(argc, argv);
	
	for(int i = 0; i < arr->size_a; i++)
		printf("%d ", arr->arr_a[i]);
}