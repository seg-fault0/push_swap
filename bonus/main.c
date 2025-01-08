/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:06:00 by wimam             #+#    #+#             */
/*   Updated: 2025/01/08 10:51:50 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

#include <stdio.h>
int main()
{
	char *instruction;

	instruction = get_next_line(0);
	while(instruction != NULL)
	{
		printf("**%s", instruction);
		free(instruction);
		instruction = get_next_line(0);
		if(instruction[0] == 10)
			return(free(instruction), 0);
	}
}