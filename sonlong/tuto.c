/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuto.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:36:50 by rcan              #+#    #+#             */
/*   Updated: 2024/04/29 19:22:10 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


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
