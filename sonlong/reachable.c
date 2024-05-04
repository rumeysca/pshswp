#include "so_long.h"

//bpozuk burası
int	ft_dfs_e(t_map *so)
{
	int		i;
    int     j;
	int		boo;

	boo = 0;
	i = 0;
	so->cpy = (char **)malloc(sizeof(char **));
	so->cpy = NULL;
	so->cpy = ft_split(so->tmp ,'\n');
    if (!so->cpy)
		return (0);
	while (i < ft_strlen(so->map))
	{
		so->cpy[i] = '0';
		i++;
	}
	if (dfs_e(so, so->x_p, so->y_p, so->cpy) == 1)
		boo = 1;
	free(so->cpy);
	return (boo);
}

int	dfs_e(t_map *so, int i, int j, char **so->cpy)
{
	if (so->cpy[i][j] == '1' || i < 0
		|| i > ft_strlen(so->map)
		|| (so->map)[i] == '1')
		return (0);
	so->cpy[i] = '1';
	if ((so->map)[i] == 'E')
		return (1);
	return (dfs_e(so, i + 1, so->cpy)
		|| dfs_e(so, i - 1, so->cpy)
		|| dfs_e(so, i + so->width, so->cpy)
		|| dfs_e(so, i - so->width, so->cpy));
}

int	ft_dfs_c(t_map *so)
{
	int		i;
	int		ret;

	ret = 0;
	i = 0;
	so->cpy = malloc(ft_strlen(so->map));
	if (!so->cpy)
		return (0);
	while (i < ft_strlen(so->map))
	{
		so->cpy[i] = '0';
		i++;
	}
	ret = dfs_c(so, so -> start, so->cpy);
	free(so->cpy);
	return (ret);
}

int	dfs_c(t_map *so, int i, char *cpy)
{
	int	coin_num;

	coin_num = 0;
	if (cpy[i] == '1' || i < 0
		|| i > ft_strlen(so->map)
		|| (so->map)[i] == '1')
		return (0);
	cpy[i] = '1';
	if ((so->map)[i] == 'C')
		coin_num = 1;
	return (dfs_c(so, i + 1, cpy)
		+ dfs_c(so, i - 1, cpy)
		+ dfs_c(so, i + so->width, cpy)
		+ dfs_c(so, i - so->width, cpy) + coin_num);
}