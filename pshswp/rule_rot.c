/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:24:01 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 08:10:07 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rotate(n_list **rot);

void	ra(n_list **a_rot)
{
	rotate(a_rot);
	write(1, "ra\n", 3);
}

void	rb(n_list **b_rot)
{
	rotate(b_rot);
	write(1, "rb\n", 3);
}

void	rr(n_list **a_rot, n_list **b_rot)
{
	if ((ft_lstsize(*a_rot) < 2) || (ft_lstsize(*b_rot) < 2))
		return ;
	rotate(a_rot);
	rotate(b_rot);
	write(1, "rr\n", 3);
}
