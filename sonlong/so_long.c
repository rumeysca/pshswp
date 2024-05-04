/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:44:00 by rcan              #+#    #+#             */
/*   Updated: 2024/05/04 19:26:25 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map(t_map *so, int fd)
{
	map_reader(so, fd);
	checker(so);
	is_reachable(so);
	return (1);
}

int	main(int argc, char **argv)
{
	t_map *so;
	int fd;
	
	if (argc != 2)
		ft_error("Missing argument");
	fd = open(argv[1],O_RDONLY);
	if(!fd || ber_checker(argv[1]))
		return (0);
	so = malloc(sizeof(t_map));
	map(so , fd);
	map_innit(so)
	

	
	
	return(0);
}