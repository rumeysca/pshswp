
#include "push_swap.h"

void	rotate(t_list **rot)
{
	t_list	*end;
	t_list	*start;

	if (ft_lstsize(*rot) < 2)
		return ;
	start = *rot;
	end = ft_lstlast(*rot);
	*rot = (*rot)->next;
	end->next = start;
	start->next = NULL;
}

void	ra(t_list **a_rot)
{
	rotate(a_rot);
	write(1, "ra\n", 3);
}

void	rb(t_list **b_rot)
{
	rotate(b_rot);
	write(1, "rb\n", 3);
}

void	rr(t_list **a_rot, t_list **b_rot)
{
	if ((ft_lstsize(*a_rot) < 2) || (ft_lstsize(*b_rot) < 2))
		return ;
	rotate(a_rot);
	rotate(b_rot);
	write(1, "rr\n", 3);
}
