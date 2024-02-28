/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_revrot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:23:10 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 08:11:03 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rev_rot(n_list **stack);

void	rra(n_list **stack)
{
	rev_rot(stack);
	write(1, "rra\n", 3);
}

void	rrb(n_list **stack)
{
	rev_rot(stack);
	write(1, "rrb\n", 3);
}

void	rrr(n_list **a_list, n_list **b_list)
{
	if (ft_lstsize(*a_list) < 2 && ft_lstsize(*b_list) < 2)
		return ;
	rev_rot(a_list);
	rev_rot(b_list);
	write(1, "rrr\n", 3);
}
