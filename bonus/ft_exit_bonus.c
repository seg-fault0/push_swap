/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:02:39 by wimam             #+#    #+#             */
/*   Updated: 2025/01/08 19:25:47 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	else if (msg == 2)
		write(2, "ERROR : number outRange INT\n", 28);
	else if (msg == 3)
		write(2, "EROOR : some arguments aren't integers\n", 39);
	else if (msg == 4)
		write(2, "EROOR : invalid or can't execute instruction\n", 45);
	else if (msg == 5)
		write(2, "EROOR : multiple new lines\n", 27);
}
