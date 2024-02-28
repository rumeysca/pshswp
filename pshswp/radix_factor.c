/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_factor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:53:04 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 07:54:22 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setrank(n_list **stack)
{
	n_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		tmp->rank = -1;
		tmp = tmp->next;
	}
}

static n_list	*find_another_min(n_list **stack)
{
	n_list	*tmp;
	n_list	*min;
	int		sign;

	tmp = *stack;
	min = NULL;
	sign = 0;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if ((tmp->rank == -1) && (!sign || tmp->content < min->content))
		{
			sign = 1;
			min = tmp;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	stacknflag(n_list **stack)
{
	n_list	*tmp;
	int		i;

	i = 0;
	tmp = find_another_min(stack);
	while (tmp)
	{
		tmp->rank = i++;
		tmp = find_another_min(stack);
	}
}

void	go_radix_go_go(n_list **a_list, n_list **b_list)
{
	int		i;
	int		j;
	int		len;

	len = stacklen(a_list);
	i = 0;
	stacknflag(a_list);
	while (!sort_check(a_list))
	{
		j = -1;
		while (++j < len)
		{
			if ((((*a_list)->rank >> i) & 1) == 1)
				ra(a_list);
			else
				pb(a_list, b_list);
		}
		while (*b_list)
			pa(b_list, a_list);
		i++;
	}
}
