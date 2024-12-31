/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:54:14 by wimam             #+#    #+#             */
/*   Updated: 2024/12/31 17:44:22 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_ps
{
	int				*arr_a;
	int				*arr_b;
	unsigned int	size_a;
	unsigned int	size_b;
}t_ps;

void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_get_arr(t_ps *arr, char **buffer);
void	ft_sort(t_ps *arr);
t_ps	*ft_init(int size, char **buffer);
void	ft_exit(t_ps *arr);
void	swap_arrays(t_ps *arr);
void	pa(t_ps *arr);
void	pb(t_ps *arr);
void	sa(t_ps *arr);
void	sb(t_ps *arr);
void	ss(t_ps *arr);
void	ra(t_ps *arr);
void	rb(t_ps *arr);
void	rr(t_ps *arr);
void	rra(t_ps *arr);
void	rrb(t_ps *arr);
void	rrr(t_ps *arr);

#endif
