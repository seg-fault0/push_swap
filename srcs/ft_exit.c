/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:02:39 by wimam             #+#    #+#             */
/*   Updated: 2025/01/08 16:33:39 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_exit(t_ps *arr)
{
	free(arr->arr_a);
	free(arr->arr_b);
	free(arr);
}

void	ft_error(unsigned int msg)
{
	if (msg == 1)
		write(2, "ERROR : doubled number\n", 23);
	if (msg == 2)
		write(2, "ERROR : found a number that is bigger/smaller than an int\n", 58);
	else if (msg == 3)
		write(2, "EROOR : some arguments aren't integers\n", 39);
}