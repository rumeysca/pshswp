/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:37:00 by rcan              #+#    #+#             */
/*   Updated: 2024/03/18 15:58:12 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	st_error(void) // baska hata mesajı yoksa void gönder bassın yeto
{
	write(2, "Error\n", 5);
	exit(0);
}

int	min_finder(t_list **a_list)
{
	t_list		*tmp;
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

int	issorted(t_list **stack)
{
	t_list	*tmp;
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

int	stacklen(t_list **stack)
{
	t_list	*tmp;
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
