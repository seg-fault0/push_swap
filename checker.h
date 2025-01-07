/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:04:59 by wimam             #+#    #+#             */
/*   Updated: 2025/01/07 14:13:27 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

typedef struct s_ps
{
	int				*arr_a;
	int				*arr_b;
	unsigned int	size_a;
	unsigned int	size_b;
}t_ps;

# include "get_next_line.h"

t_ps	*ft_arr_init(int size, char **buffer);

#endif