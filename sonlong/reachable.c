/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reachable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:20:47 by rcan              #+#    #+#             */
/*   Updated: 2024/05/04 19:20:47 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_reachable(t_map *so)
{
	so->cpy = (char **)malloc(sizeof(char **));
	so->cpy = NULL;
	so->cpy = ft_split(so->tmp ,'\n');
	
	player_movable(so, so->y_p, so->x_p);
	if (coin_check(so) || exit_check(so))
		return (1);
	return (0);
}

void	player_movable(t_map *so, int y, int x)
{
	if (so->cpy[y][x + 1] == '0' || so->cpy[y][x + 1] == 'C')
	{
		so->cpy[y][x + 1] = 'P';
		player_movable(so, y, x + 1);
	}
	if (so->cpy[y][x - 1] == '0' || so->cpy[y][x - 1] == 'C')
	{
		so->cpy[y][x - 1] = 'P';
		player_movable(so, y, x - 1);
	}
	if (so->cpy[y + 1][x] == '0' || so->cpy[y + 1][x] == 'C')
	{
		so->cpy[y + 1][x] = 'P';
		player_movable(so, y + 1, x);
	}
	if (so->cpy[y - 1][x] == '0' || so->cpy[y - 1][x] == 'C')
	{
		so->cpy[y - 1][x] = 'P';
		player_movable(so, y - 1, x);
	}
}

int	coin_check(t_map *so)
{
	int	y;
	int	x;

	y = 0;
	while (so->cpy[y])
	{
		x = 0;
		while (so->cpy[y][x] != 0 && so->cpy[y][x] != '\n')
		{
			if (so->cpy[y][x] == 'C')
			{
				ft_error("Player can't reach the collectibles");
			}
			x++;
		}
		y++;
	}
	return (0);
}

int	exit_check(t_map *so)
{
	int	y;
	int	x;

	y = 0;
	while (so->cpy[y] != 0)//mapi satır satır kontrol ediyoruz
	{
		x = 0;
		while (so->cpy[y][x] != '\n')//burada da sütun sütun kontrol ediyoruz
		{
			if (so->cpy[y][x] == 'E')//çıkışı bulduk artık konum elimizde break attık
				break ;
			x++;
		}
		if (so->cpy[y][x] == 'E')// içteki whiledan çıktık dıştaki whiledan çıkabilmek için bir daha break atmalıyız
			break ;
		y++;
	}
	if (so->cpy[y][x + 1] == 'P' || so->cpy[y][x - 1] == 'P' || \
			so->cpy[y + 1][x] == 'P' || so->cpy[y - 1][x] == 'P')//bulunduğumuz konumun üst alt sağ sol değerleri P mi kontrol ediyoruz
		return (0);//koşul sağlanıyorsa çıkış ulaşılabilir
	ft_error("Player can't reach the exit\n");
	return (1);
}
