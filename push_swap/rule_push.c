
#include "push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (ft_lstsize(*src) == 0)
		return ;
	tmp = *src;
	*src = (*src)->next;
	ft_lstadd_front(dst, tmp);
}

void	pa(t_list **b_push, t_list **a_push)
{
	push(b_push, a_push);
	write(1, "pa\n", 3);
}

void	pb(t_list **a_push, t_list **b_push)
{
	push(a_push, b_push);
	write(1, "pb\n", 3);
}
