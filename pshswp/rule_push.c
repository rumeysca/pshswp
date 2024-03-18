/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:21:48 by rcan              #+#    #+#             */
/*   Updated: 2024/03/09 14:11:11 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	pp(t_list **a_push, t_list **b_push)
{
	push(a_push, b_push);
	write(1, "pb\n", 3);
}
