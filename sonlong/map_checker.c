/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcan <rcan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:56:17 by rcan              #+#    #+#             */
/*   Updated: 2024/04/29 22:53:46 by rcan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void map_reader(t_map *so, int fd) // dörtgen değilseee error 
{
	int width;
	int width_check;
	int i;
	char *s;
	
	i = 1;
	width = 0;
	so->map = (char **)malloc(sizeof(char **));
	so->map = NULL;
	so->tmp = (char *)malloc(sizeof(char *));
	s = ft_read(fd, so->tmp);
	so->map = ft_split(s,'\n');
	width_check = ft_linelen(so->map[0]);
	while (so->map[i])
	{
		width = ft_linelen(so->map[i]);
		if(width_check != width)
			ft_error("Map is not rectangular");
		i++;		
	}
	so->width = width;
	so->height = i - 1;	
}

void wall_checker(t_map *so)// duvarlar çerçeve
{
	int i;
	
	i = 0;
	
	while(so->map[0][i] != '\0')
	{
		if(so->map[0][i] != '1')
		{
			ft_error("Duvar hatası!");
		}
		i++;
	}
	i = 0;
	while(so->map[(ft_len(so->map))-1][i] != '\0')
	{
		if(so->map[(ft_len(so->map))-1][i] != '1')
			ft_error("Duvar hatası!");
		i++;
	}
	i = 0;
	while(so->map[i] != NULL)
	{
		if((so->map[i][0] != '1') || (so->map[i][ft_linelen(so->map[0])-1] != '1'))
			ft_error("Duvar hatası!");
		i++;
	}
}

void	checker(t_map *so)
{
	int i;
	int j;

	j = 0;
	i = 0;

	so->collect_num = (int)malloc(sizeof(int));
	so->collect_num = 0;
	so->exit_num = (int)malloc(sizeof(int));
	so->exit_num = 0;
	so->player_num = (int)malloc(sizeof(int));
	so->player_num = 0;
	wall_checker(so);
	while(so->map[i] != NULL)
	{
		while(so->map[i][j] != '\0')
		{
			if(so->map[i][j] == 'C') // collect num arttırmıyor
				so->collect_num = so->collect_num + 1;
			else if(so->map[i][j] == 'E')
				(so->exit_num)++;
			else if(so->map[i][j] == 'P')
			{
				(so->player_num)++;
				so->y_p = i;
				so->x_p = j;
			}
			else if((so->map[i][j] != '0') && (so->map[i][j] != '1'))
				ft_error("Geçersiz karakter!");
			j++;	
		}
		i++;
	}
	ft_charcheck(so);
}

void	ft_charcheck(t_map *so)
{
	ft_printf("%d",so->collect_num);
	if ((so->collect_num) < 1)
		ft_error("c eksik");
	if ((so->exit_num) != 1)
		ft_error("e eksik");
	if ((so->player_num) != 1)
		ft_error("p eksik");
}

char	*ft_read(int fd, char *src)
{
	ssize_t	readb; // ssizet?? read function bu türde bir değer döndüryormuş araştırmanı öneririm(man read)
	char	*buff;

	readb = 1;
	buff = (char *)malloc(sizeof(char) * 2); // tek karakter ve null
	if (!buff)
	{
		return (NULL);
	}
	while (readb != 0)
	{
		readb = read(fd, buff, BUFFER_SIZE);
		//ft_printf("%d",readb);
		if (readb == -1)
		{
			free(buff);
			free(src); // src??( bunu benim get next linedan aldıysan bu static diye bunu da freeliyorduk içi boş olmayabilir çünkü)
			return (NULL);
		}
		buff[readb] = '\0';
		src = ft_strjoy(src, buff);
	}
	//ft_printf("%s",src);
	free(buff);
	return (src);
}
