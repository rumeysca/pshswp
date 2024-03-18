/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_revrot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:23:10 by rcan              #+#    #+#             */
/*   Updated: 2024/03/02 20:45:51 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	write(1, "rra\n", 3);
}

void	rrb(t_list **stack)
{
	rev_rot(stack);
	write(1, "rrb\n", 3);
}

void	rrr(t_list **a_list, t_list **b_list)
{
	if (ft_lstsize(*a_list) < 2 && ft_lstsize(*b_list) < 2)
		return ;
	rev_rot(a_list);
	rev_rot(b_list);
	write(1, "rrr\n", 3);
}
