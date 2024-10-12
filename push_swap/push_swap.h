
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

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

void			third_sort(t_list **a_list);
void			fourth_sort(t_list **a_list, t_list **b_list);
void			fifth_sort(t_list **a_list, t_list **b_list);
void			stack_checker(t_list **stack);

void			st_error(void);
int				min_finder(t_list **a_list);
int				issorted(t_list **stack);
int				stacklen(t_list **stack);

t_list			*find_minmin(t_list **stack);
void			rank_lst(t_list **stack);
void			radix_factor(t_list **a_list, t_list **b_list);

void			stack_split(char *av, t_list **stack);
void			stack_new(t_list **stack, char **av);
void			sorting_start(t_list **a_list, t_list **b_list, int len);
void			str_checker(const char *str);

#endif