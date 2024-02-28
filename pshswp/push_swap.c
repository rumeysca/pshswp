/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:48:01 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 07:51:57 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_split(char *av, n_list **stack)
{
	int		i;
	char	**x;
	n_list	*new;

	i = -1;
	x = ft_split(av, 32);
	while (x[++i])
	{
		new = ft_lstnew(ft_atoi(x[i]));
		ft_lstadd_back(stack, new);
	}
	while (x[i])
		free(x[i++]);
	free(x);
}

void	stack_new(n_list **stack, char **av)
{
	n_list	*new_stack;
	int		i;

	i = 1;
	while (av[i])
	{
		if (ft_strchr(av[i], ' ') != NULL)
			stack_split(av[i], stack);
		else
		{
			new_stack = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(stack, new_stack);
		}
		i++;
	}
	check_argum(stack);
}

void	sorting_start(n_list **a_list, n_list **b_list, int len)
{
	if (len == 3)
		triple_sort(a_list, b_list);
	if (len == 2)
		sa(a_list);
	if (len == 4)
		four_arguman_sort(a_list, b_list);
	if (len >= 5)
		go_radix_go_go(a_list, b_list);
}

int	main(int ac, char **av)
{
	n_list	**a_list;
	n_list	**b_list;
	int		len;

	if (ac < 2)
		return (0);
	a_list = (n_list **)malloc(sizeof(n_list *));
	b_list = (n_list **)malloc(sizeof(n_list *));
	*a_list = NULL;
	*b_list = NULL;
	stack_new(a_list, av);
	setflag(a_list);
	is_sorted(a_list, ac);
	len = stacklen(a_list);
	sorting_start(a_list, b_list, len);
	while(*a_list)
	{
		printf("%d\n",(*a_list)->content);
		*a_list = (*a_list)->next;
	}
	return (0);

}