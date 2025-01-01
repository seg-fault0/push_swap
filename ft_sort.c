#include "push_swap.h"

void	ft_push_to_b(t_ps *arr)
{
	int limit;
	int i;
	int lock;
	int	first_push;

	limit = ft_get_limit(arr, 20);
	first_push = limit;
	lock = 0;
	while(arr->size_a > 0)
	{
		i = 0;
		while (i < arr->size_a)
		{
			if (arr->arr_a[0] <= limit && lock == 0)
			{
				pb(arr);
				if (limit != first_push)
					lock = 1;
			}
			else if(arr->arr_a[0] <= limit && lock == 1 && limit != first_push)
			{
				pb(arr);
				rb(arr);
				lock = 0;
			}
			else
			{
				ra(arr);
				i++;
			}
		}
		limit += ft_get_limit(arr, 20);
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