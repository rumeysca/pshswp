/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 06:44:56 by rcan              #+#    #+#             */
/*   Updated: 2024/03/18 16:11:36 by rcan             ###   ########.fr       */
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
}					t_list;

int				ft_atoi(const char *str);
int				ft_isdigit(int input);
char			**ft_split(char const *s, char c);
char			*ft_strrchr(const char *str, int c);	
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(int content);
int				ft_lstsize(t_list *lst);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_strdup(const char *str);

void			swap(t_list **data);
void			sa(t_list **a_swap);
void			sb(t_list **b_swap);
void			ss(t_list **a_swap, t_list **b_swap);

void			push(t_list **src, t_list **dst);
void			pa(t_list **b_push, t_list **a_push);
void			pb(t_list **a_push, t_list **b_push);
void			pp(t_list **a_push, t_list **b_push);

void			rotate(t_list **rot);
void			ra(t_list **a_rot);
void			rb(t_list **b_rot);
void			rr(t_list **a_rot, t_list **b_rot);

void			rev_rot(t_list **stack);
void			rra(t_list **stack);
void			rrb(t_list **stack);
void			rrr(t_list **a_list, t_list **b_list);

void			third_sort(t_list **a_list, t_list **b_list);
void			fourth_sort(t_list **a_list, t_list **b_list);
void			stack_checker(t_list **stack);

void			st_error(void);
int				min_finder(t_list **a_list);
int				issorted(t_list **stack);
int				stacklen(t_list **stack);

void			setrank(t_list **stack);
t_list			*find_minmin(t_list **stack);
void			rank_lst(t_list **stack);
void			radix_factor(t_list **a_list, t_list **b_list);

void			stack_split(char *av, t_list **stack);
void			stack_new(t_list **stack, char **av);
void			sorting_start(t_list **a_list, t_list **b_list, int len);
void			str_checker(const char *str);

#endif