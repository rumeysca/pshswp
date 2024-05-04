/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_innit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:17:21 by rcan              #+#    #+#             */
/*   Updated: 2024/05/04 19:40:28 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_init(t_map so)
{
	int	x;

	so->playermove = 0;
	so->mlx = mlx_init();
	x = ft_strlen(so->map_line[0]) - 1;
	so->mlx_win = mlx_new_window(so->mlx, \
		64 * x, 64 * so->map_y_line, "SO_LONG");
	if (!so->mlx || !so->mlx_win || create_xpm(so))
	{
		ft_printf("Error : mlx or mlx_win is NULL!\n");
		return (1);
	}
	put_image(so);
	mlx_string_put(so->mlx, so->mlx_win, 15, 15, 16777215, "0");
	mlx_hook(so->mlx_win, 2, 1L << 2, ft_move, so);
	mlx_hook(so->mlx_win, 17, 1L << 2, safe_exit, so);
	mlx_loop(so->mlx);

	/*so -> mlx_start = mlx_init();
	so -> windows = mlx_new_window(so -> mlx_start,
			((so->width - 1) * 50), (so -> height * 50), "so_long");
	get_images(so);
	put_images(so);
	mlx_key_hook(so -> windows, keys, so);
	mlx_hook(so -> windows, 17, 0, (void *)exit, 0);
	mlx_loop(so -> mlx_start);*/
	return (0);
}

void	open_wdw(t_map height, t_map width)
{	
	void *mlx;
	void *mlx_win;
	int *img;

	mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1920, 1080, "deneme");
	img = mlx_xpm_file_to_image(mlx, "images/player.xpm",&width, &height);
    mlx_put_image_to_window(mlx, mlx_win, img, 0, 0);

    mlx_loop(mlx);
}
int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	//open_wdw()
		
    
    return 0;	
}