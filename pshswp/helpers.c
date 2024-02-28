/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:37:00 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 07:46:25 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	st_error(char *str)
{
	write(2,"error",5);
	exit(0);
}

int	min_finder(n_list **a_list)
{
	n_list		*tmp;
	int			min;

	tmp = *a_list;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int	issorted(n_list **stack)
{
	n_list	*tmp;
	int		i;
	int		len;

	i = 0;
	len = stacklen(stack);
	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content)
			i++;
		tmp = tmp->next;
	}
	if (i == len - 1)
		return (1);
	return (0);
}

int	stacklen(n_list **stack)
{
	n_list	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}