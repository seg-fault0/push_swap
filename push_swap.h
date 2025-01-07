/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:54:14 by wimam             #+#    #+#             */
/*   Updated: 2025/01/07 13:44:57 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_ps
{
	int				*arr_a;
	int				*arr_b;
	unsigned int	size_a;
	unsigned int	size_b;
}t_ps;

//utiles
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_get_arr(t_ps *arr, char **buffer);
t_ps	*ft_init(int size, char **buffer);
void	ft_exit(t_ps *arr);

//get
int		ft_get_min_index(int *arr, unsigned int size);
int		ft_get_max_index(int *arr, unsigned int size);
int		ft_get_limit(int *arr, int size, int max);
int		find_nth_smallest(int *arr, int size, int n);

//instructions
void	pa(t_ps *arr);
void	pb(t_ps *arr);
void	ra(t_ps *arr);
void	rb(t_ps *arr);
void	rrb(t_ps *arr);
void	rra(t_ps *arr);

//sort
void	chuck_sort(t_ps *arr);
void	selection_sort(t_ps *arr);

#endif
