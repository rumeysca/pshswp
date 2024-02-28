/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:21:48 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 08:10:34 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push(n_list **src, n_list **dst);

void	pa(n_list **b_push, n_list **a_push)
{
	push(b_push, a_push);
	write(1, "pa\n", 3);
}

void	pb(n_list **a_push, n_list **b_push)
{
	push(a_push, b_push);
	write(1, "pb\n", 3);
}

void	pp(n_list **a_push, n_list **b_push)
{
	push(a_push, b_push);
	write(1, "pb\n", 3);
}
