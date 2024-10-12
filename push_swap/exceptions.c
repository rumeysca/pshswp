
#include "push_swap.h"

void	third_sort(t_list **a_list)
{
	rank_lst(a_list);
	if ((*a_list)->rank == 2)
	{
		ra(a_list);
	}
	else if ((*a_list)->next->rank == 2)
	{
		rra(a_list);
	}
	if (!issorted(a_list))
	{
		sa(a_list);
	}
}

void	fourth_sort(t_list **a_list, t_list **b_list)
{
	int	len;
	int	min;

	len = stacklen(a_list);
	min = min_finder(a_list);
	while (0 < len)
	{
		if ((*a_list)->content == min)
		{
			pb(a_list, b_list);
			break ;
		}
		rra(a_list);
		len--;
	}
	third_sort(a_list);
	pa(b_list, a_list);
}

void	fifth_sort(t_list **a_list, t_list **b_list)
{
	int	len;
	int	min;

	len = stacklen(a_list);
	min = min_finder(a_list);
	while (0 < len)
	{
		if ((*a_list)->content == min)
		{
			pb(a_list, b_list);
			break ;
		}
		rra(a_list);
		len--;
	}
	fourth_sort(a_list, b_list);
	pa(b_list, a_list);
}

void	stack_checker(t_list **stack)
{
	t_list	*tmp;

	while ((*stack)->next != NULL)
	{
		tmp = (*stack)->next;
		while (tmp)
		{
			if ((*stack)->content == tmp->content)
				st_error();
			tmp = tmp->next;
		}
		stack = &(*stack)->next;
	}
}
