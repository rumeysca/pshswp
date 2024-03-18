/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:21:52 by rcan              #+#    #+#             */
/*   Updated: 2024/03/18 15:09:24 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	third_sort(t_list **a_list, t_list **b_list)
{
	int	len;
	int	min;

	len = stacklen(a_list);
	min = min_finder(a_list);
	while (0 < len)
	{
		if ((*a_list)->content == min)
		{
			pb(a_list, b_list);
			break ;
		}
		ra(a_list);
		len--;
	}
	if ((*a_list)->content > (*a_list)->next->content)
	{
		sa(a_list);
	}
	pa(b_list, a_list);
}

void	fourth_sort(t_list **a_list, t_list **b_list)
{
	int	len;
	int	min;

	len = stacklen(a_list);
	min = min_finder(a_list);
	while (0 < len)
	{
		if ((*a_list)->content == min)
		{
			pb(a_list, b_list);
			break ;
		}
		ra(a_list);
		len--;
	}
	third_sort(a_list, b_list);
	pa(b_list, a_list);
}

void	stack_checker(t_list **stack) // same int error
{
	t_list	*tmp;

	while ((*stack)->next != NULL)
	{
		tmp = (*stack)->next;
		while (tmp)
		{
			if ((*stack)->content == tmp->content)
				st_error();
			tmp = tmp->next;
		}
		stack = &(*stack)->next;
	}
}
