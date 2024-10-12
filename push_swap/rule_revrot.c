
#include "push_swap.h"

void	rev_rot(t_list **stack)
{
	t_list	*second;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return ;
	second = *stack;
	while (second->next->next)
		second = second->next;
	last = second->next;
	second->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_list **stack)
{
	rev_rot(stack);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack)
{
	rev_rot(stack);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a_list, t_list **b_list)
{
	if (ft_lstsize(*a_list) < 2 && ft_lstsize(*b_list) < 2)
		return ;
	rev_rot(a_list);
	rev_rot(b_list);
	write(1, "rrr\n", 4);
}
