/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_swp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:21:07 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 10:21:36 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap(n_list **data)
{
	 
}

void		sa(n_list **a_swap)
{
	swap(a_swap);
	write(1,"sa\n",3);
	
}
void		sb(n_list **b_swap)
{
	swap(b_swap);
	write(1,"sb\n",3);
}
void		ss(n_list **a_swap, n_list **b_swap)
{
	if ((ft_lstsize(*a_swap) < 2) || (ft_lstsize(*b_swap) < 2))
		return ;
	swap(a_swap);
	swap(b_swap);
	write(1, "ss\n", 3);
}
