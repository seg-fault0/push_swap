/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:04:59 by wimam             #+#    #+#             */
/*   Updated: 2025/01/09 11:00:00 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

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
long	ft_atoi(char *str);
void	ft_putstr(char *str);
int		check_dup(int *arr, size_t size);
int		isnb(char c);
int		issign(char c);
int		ft_is_sorted(int *arr, int size);
int		ft_strcmp(char *s1, char *s2);

//instructions
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

//GNL
int		ft_strlen(char *str);
char	*ft_strljoin(char *s1, char *s2, int size);
int		ft_new_line_check(char *str);
char	*ft_init_buffer(char *str);
char	*ft_strdup(char *s);
char	*get_next_line(int fd, t_ps *arr);

#endif