
#include "push_swap.h"

t_list	*find_minmin(t_list **stack)
{
	t_list	*tmp;
	t_list	*min;
	int		sign;

	tmp = *stack;
	min = NULL;
	sign = 0;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if ((tmp->rank == -1) && (!sign || tmp->content < min->content))
		{
			sign = 1;
			min = tmp;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	rank_lst(t_list **stack)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = find_minmin(stack);
	while (tmp)
	{
		tmp->rank = i++;
		tmp = find_minmin(stack);
	}
}

void	radix_factor(t_list **a_list, t_list **b_list)
{
	int		i;
	int		j;
	int		len;

	len = stacklen(a_list);
	rank_lst(a_list);
	i = 0;
	while (!issorted(a_list))
	{
		j = -1;
		while (++j < len)
		{
			if ((((*a_list)->rank >> i) & 1) == 1)
				ra(a_list);
			else
				pb(a_list, b_list);
		}
		while (*b_list)
			pa(b_list, a_list);
		i++;
	}
}
