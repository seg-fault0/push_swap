/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:04:59 by wimam             #+#    #+#             */
/*   Updated: 2025/01/08 14:10:35 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "get_next_line.h"

typedef struct s_ps
{
	int		*arr_a;
	int		*arr_b;
	size_t	size_a;
	size_t	size_b;
}t_ps;

//main func
t_ps	*ft_init(size_t argc, char **argv);
void	ft_exit(t_ps *arr);
void	ft_error(unsigned int msg);

//utils
int		ft_atoi(char *str);
void	ft_putstr(char *str);
int		check_dup(int *arr, size_t size);
int 	is_num(char c);
int 	is_sign(char c);


#endif