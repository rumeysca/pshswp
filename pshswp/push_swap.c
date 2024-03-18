/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:48:01 by rcan              #+#    #+#             */
/*   Updated: 2024/03/18 17:39:07 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_split(char *av, t_list **stack)
{
	int		i;
	char	**x;
	t_list	*new;

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

void	str_checker(const char *str)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (str[j])
	{
		if (str[j] == ' ')
		{
			i++;
		}
		j++;
	}
	if (j == i)
		st_error();
}

void	stack_new(t_list **stack, char **av)
{
	t_list	*new_stack;
	int		i;

	i = 1;
	while (av[i])
	{
		if (ft_strrchr(av[i], ' ') != NULL)
		{
			str_checker(av[i]);
			stack_split(av[i], stack);
		}
		else
		{
			new_stack = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(stack, new_stack);
		}
		i++;
	}
	stack_checker(stack);
}

void	sorting_start(t_list **a_list, t_list **b_list, int len)
{
	if (len == 3)
		third_sort(a_list, b_list);
	if (len == 2)
		sa(a_list);
	if (len == 4)
		fourth_sort(a_list, b_list);
	if (len >= 5)
		radix_factor(a_list, b_list);
}

int	main(int ac, char **av)
{
	t_list	**a_list;
	t_list	**b_list;
	int		len;

	if (ac < 2)
		return (0);
	a_list = (t_list **)malloc(sizeof(t_list *));
	b_list = (t_list **)malloc(sizeof(t_list *));
	*a_list = NULL;
	*b_list = NULL;
	stack_new(a_list, av);
	setrank(a_list);
	issorted(a_list);
	len = stacklen(a_list);
	sorting_start(a_list, b_list, len);
	return (0);
}
