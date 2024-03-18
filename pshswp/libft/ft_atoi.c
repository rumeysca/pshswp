/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 06:43:43 by rcan              #+#    #+#             */
/*   Updated: 2024/03/09 13:07:50 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			sign;

	sign = 1;
	i = 0;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
		res = (res * 10) + (str[i++] - '0');
	if ((res > 2147483648 && sign == -1)
		|| (res > 2147483647 && sign == 1))
		st_error();
	if ((str[i] && !ft_isdigit(str[i]) && str[i] != 10)
		|| (str[i] == '-' && !str[1]))
		st_error();
	return ((int)(sign * res));
}
