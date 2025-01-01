/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <walidimam69gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:54:07 by wimam             #+#    #+#             */
/*   Updated: 2025/01/01 19:22:59 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	ft_get_min_index(int *arr, unsigned int size)
{
	unsigned int	i;
	int				min_index;

	min_index = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] < arr[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}


int	ft_get_max_index(int *arr, unsigned int size)
{
	unsigned int	i;
	int				max_index;

	max_index = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] > arr[max_index])
			max_index = i;
		i++;
	}
	return (max_index);
}

int ft_get_limit(t_ps *arr, int max)
{
	int i = 0;
	int j = 0;
	int check = 0;

	while(i < arr->size_a)
	{
		j = 0;
		check = 0;
		while(j < arr->size_a)
		{
			if (arr->arr_a[i] > arr->arr_a[j])
				check++;
			j++;
		}
		if(check == max - 1)
			return (arr->arr_a[i]);
		i++;
	}
	return(arr->arr_a[i]);

}

int find_nth_smallest(int *arr, int size, int n)
{
    int smallest;
    int count;
    int i;
    int j;
    int used[size]; // Array to mark used numbers
    for (i = 0; i < size; i++) {
        used[i] = 0; // Initialize the 'used' array to 0
    }

    if (n <= 0 || n > size)
        return (0);
    
    count = 0;
    while (count < n)
    {
        smallest = INT_MAX;
        i = 0;
        while (i < size)
        {
            // Skip the numbers that have already been used
            if (used[i] == 1) {
                i++;
                continue;
            }

            if (arr[i] < smallest) {
                smallest = arr[i];
            }
            i++;
        }

        // Mark the smallest number as used
        for (i = 0; i < size; i++) {
            if (arr[i] == smallest) {
                used[i] = 1;
                break;
            }
        }

        count++;
    }

    return smallest; // Return the nth smallest value
}