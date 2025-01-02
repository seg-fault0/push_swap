#include "push_swap.h"

void	ft_push_chunk(t_ps *arr, int limit, int average)
{
	int	i;

	i = 0;
	while (i < arr->size_a)
	{
		if(arr->arr_a[0] <= limit)
		{
			pb(arr);
			if(arr->arr_b[0] <= average)
				rb(arr);
		}
		else
		{
			ra(arr);
			i++;
		}
	}
}

void	ft_push_to_b(t_ps *arr)
{
	int limit;
	int	dif;
	int average;

	limit = ft_get_limit(arr, 20);
	dif = limit - arr->arr_a[ft_get_min_index(arr->arr_a, arr->size_a)];
	average = limit - (dif / 2);
	while(arr->size_a > 0)
	{
		ft_push_chunk(arr, limit, average);
		limit = ft_get_limit(arr, 20);
		dif = limit - arr->arr_a[ft_get_min_index(arr->arr_a, arr->size_a)];
		average = limit - (dif / 2);
	}

}

void	ft_push_to_a(t_ps *arr)
{
	int	maxi;
	int max_nbr;

	while(arr->size_b > 0)
	{
		maxi = ft_get_max_index(arr->arr_b, arr->size_b);
		max_nbr = arr->arr_b[maxi];
		if (maxi > arr->size_b / 2)
		{
			while (1 == 1)
			{
				if (arr->arr_b[0] == max_nbr)
				{
					pa(arr);
					break ;
				}
				rrb(arr);
			}
		}
		else
		{
			while(1 == 1)
			{
				if (arr->arr_b[0] == max_nbr)
				{
					pa(arr);
					break ;
				}
				rb(arr);
			}
		}
	}
}

void	ft_sort(t_ps *arr)
{
	ft_push_to_b(arr);
	ft_push_to_a(arr);
}