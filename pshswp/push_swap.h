/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 06:44:56 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 07:55:32 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				rank;
	struct s_list	*next;
}					n_list;

int			ft_atoi(const char *str);
int static	ftcount(char const *s, char c);
char		**ft_split(char const *s, char c);
char		*ft_strrchr(const char *str, int c);	
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ft_lstadd_back(n_list **lst, n_list *new);
void		ft_lstadd_front(n_list **lst, n_list *new);
n_list		*ft_lstlast(n_list *lst);
n_list		*ft_lstnew(int content);
int			ft_lstsize(n_list *lst);

void		swap(n_list **data);
void		sa(n_list **a_swap);
void		sb(n_list **b_swap);
void		ss(n_list **a_swap, n_list **b_swap);

void		push(n_list **src, n_list **dst);
void		pa(n_list **b_push, n_list **a_push);
void		pb(n_list **a_push, n_list **b_push);
void		pp(n_list **a_push, n_list **b_push);

void		rotate(n_list **rot);
void		ra(n_list **a_rot);
void		rb(n_list **b_rot);
void		rr(n_list **a_rot, n_list **b_rot);

void		rev_rot(n_list **stack);
void		rra(n_list **stack);
void		rrb(n_list **stack);
void		rrr(n_list **a_list, n_list **b_list);

void		third_sort(n_list **a_list, n_list **b_list);
void		fourth_sort(n_list **a_list, n_list **b_list);
void		stack_checker(n_list **stack);
void		is_needed(n_list **stack, int ac);

void		st_error(char *str);
int			min_finder(n_list **a_list);
int			sort_check(n_list **stack);
int			stacklen(n_list **stack);


#endif