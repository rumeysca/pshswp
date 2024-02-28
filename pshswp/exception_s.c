/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:27:02 by rcan              #+#    #+#             */
/*   Updated: 2024/02/28 11:49:08 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void		third_sort(n_list **a_list, n_list **b_list);
void		fourth_sort(n_list **a_list, n_list **b_list);
void		stack_checker(n_list **stack); // aynı sayıdan birden fazla girilmiş mi kontrol edilmeli negatif ve int aşan sayıları atoide error gönder.

void		is_needed(n_list **stack, int ac) //does it already sorted or not, do we need a to sort or what{
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
	if (i == len - 1 && ac > 2)
		exit(0);
}