/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:06:00 by wimam             #+#    #+#             */
/*   Updated: 2025/01/09 10:41:10 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_event(t_ps *arr, char *str)
{
	if (ft_strcmp(str, "pa") && arr->size_b > 0)
		pa(arr);
	else if (ft_strcmp(str, "pb") && arr->size_a > 0)
		pb(arr);
	else if (ft_strcmp(str, "ra") && arr->size_a > 1)
		ra(arr);
	else if (ft_strcmp(str, "rb") && arr->size_b > 1)
		rb(arr);
	else if (ft_strcmp(str, "rra") && arr->size_a > 1)
		rra(arr);
	else if (ft_strcmp(str, "rrb") && arr->size_b > 1)
		rrb(arr);
	else if (ft_strcmp(str, "sa"))
		sa(arr);
	else if (ft_strcmp(str, "sb"))
		sb(arr);
	else if (ft_strcmp(str, "ss"))
		ss(arr);
	else if (ft_strcmp(str, "rrr"))
		rrr(arr);
	else if (ft_strcmp(str, "rr"))
		rr(arr);
	else
		return (ft_error(4), ft_exit(arr), exit (1), 1);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_ps	*arr;
	char	*instruction;

	arr = ft_init(argc - 1, argv + 1);
	if (!arr)
		return (1);
	instruction = get_next_line(0, arr);
	while (instruction)
	{
		if(ft_event(arr, instruction))
			break ;
		free(instruction);
		instruction = get_next_line(0, arr);
	}
	free(instruction);
	if (ft_is_sorted(arr->arr_a, arr->size_a) && arr->size_b == 0)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (ft_exit(arr), 0);
}
