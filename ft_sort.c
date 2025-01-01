#include "push_swap.h"

void	ft_push_to_b(t_ps *arr)
{
	int	maxi;
	int limit;
	int i;
	int lock;

	limit = 70;
	lock = 0;
	while(arr->size_a > 0)
	{
		maxi = ft_get_max_index(arr->arr_a, arr->size_a);
		i = 0;
		while (i < arr->size_a)
		{
			if (arr->arr_a[0] <= limit && lock == 0)
			{
				pb(arr);
				lock = 1;
			}
			else if(arr->arr_a[0] <= limit && lock == 1)
			{
				pb(arr);
				rb(arr);
				lock = 0;
			}
			else
				ra(arr);
			i++;
		}
		limit += 70;
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
		if (maxi > arr->size_b)
		{
			while (1 == 1)
			{
				if (arr->arr_b[0] == max_nbr)
				{
					pa(arr);
					break ;
				}
				rb(arr);
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
				rrb(arr);
			}
		}
	}
}

void	ft_sort(t_ps *arr)
{
	ft_push_to_b(arr);
	ft_push_to_a(arr);
}