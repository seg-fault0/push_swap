/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:54:14 by wimam             #+#    #+#             */
/*   Updated: 2025/01/09 11:56:26 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_ps
{
	int		*arr_a;
	int		*arr_b;
	size_t	size_a;
	size_t	size_b;
}t_ps;

//utiles
void	ft_putstr(char *str);
long	ft_atoi(char *str);
t_ps	*ft_init(size_t argc, char **argv);
int		check_dup(int *arr, size_t size);
int		isnb(char c);
int		issign(char c);
int		ft_is_sorted(int *arr, int size);

//get
size_t	ft_get_min_index(int *arr, size_t size);
size_t	ft_get_max_index(int *arr, size_t size);
int		ft_get_limit(int *arr, size_t size, int max);
int		find_nth_smallest(int *arr, int size, int n);

//instructions
void	pa(t_ps *arr);
void	pb(t_ps *arr);
void	ra(t_ps *arr);
void	rb(t_ps *arr);
void	rrb(t_ps *arr);
void	rra(t_ps *arr);

//sort
void	chuck_sort(t_ps *arr, size_t chunk_size);
void	selection_sort(t_ps *arr);

//other
void	ft_error(unsigned int msg);
void	ft_exit(t_ps *arr);

#endif
