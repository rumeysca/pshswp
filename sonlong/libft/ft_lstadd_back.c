/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 06:43:47 by rcan              #+#    #+#             */
/*   Updated: 2024/03/18 14:36:17 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*trsh;

	if (!lst)
		return ;
	if (*lst)
	{
		trsh = ft_lstlast(*lst);
		trsh->next = new;
	}
	else
		*lst = new;
}
