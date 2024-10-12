
#include "push_swap.h"

void	swap(t_list **data)
{
	t_list	*temp;

	if (ft_lstsize(*data) < 2)
		return ;
	temp = (*data)->next;
	(*data)->next = temp->next;
	temp->next = *data;
	*data = temp;
}

void	sa(t_list **a_swap)
{
	swap(a_swap);
	write(1, "sa\n", 3);
}

void	sb(t_list **b_swap)
{
	swap(b_swap);
	write(1, "sb\n", 3);
}

void	ss(t_list **a_swap, t_list **b_swap)
{
	if ((ft_lstsize(*a_swap) < 2) || (ft_lstsize(*b_swap) < 2))
		return ;
	swap(a_swap);
	swap(b_swap);
	write(1, "ss\n", 3);
}
