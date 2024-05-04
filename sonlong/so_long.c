/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:44:00 by rcan              #+#    #+#             */
/*   Updated: 2024/04/29 21:09:26 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map(t_map *so, int fd)
{
	map_reader(so, fd);
	checker(so);
	if (ft_dfs_e(so) == 0)
		ft_error("e ye ulasilmiyo");
	if (ft_dfs_c(so) != so->collect_num)
		ft_error("bütün collectableslara ulaşilmiyo");
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

	/*so -> mlx_start = mlx_init();
	so -> windows = mlx_new_window(so -> mlx_start,
			((so->width - 1) * 50), (so -> height * 50), "so_long");
	get_images(so);
	put_images(so);
	mlx_key_hook(so -> windows, keys, so);
	mlx_hook(so -> windows, 17, 0, (void *)exit, 0);
	mlx_loop(so -> mlx_start);*/
	
	return(0);
}