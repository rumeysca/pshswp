/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 06:44:02 by rcan              #+#    #+#             */
/*   Updated: 2024/02/25 07:08:54 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

n_list	*ft_lstnew(int content)
{
	n_list	*ret;

	ret = (n_list *)malloc(sizeof(n_list));
	if (!ret)
		return ((void *)0);
	ret->content = content;
	ret->rank = -1;
	ret->next = NULL;
	return (ret);
}
