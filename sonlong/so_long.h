
#ifndef SO_LONG_H
 #define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

 //#include "mlx/mlx.h"
 #include "ft_printf/ft_printf.h"
 #include "libft/libft.h"
 #include <stdio.h>
 #include <stdlib.h>
 #include <fcntl.h>
 #include <sys/types.h>
 //#include <sys/uio.h>
 #include <unistd.h>
 

	typedef struct s_map
	{
		int		height;
		int		width;
		int		collect_num;
		int		player_num;
		int		exit_num;
		char 	**map;
		char	**cpy;
		char	*tmp;
		int		x_p;
		int		y_p;
	
 	}					t_map;

void	ft_error(char *error);
int		ft_len(char **line);
int 	ft_linelen(char *line);
int		ber_checker(char *ber);
char	*ft_strjoy(char *s1, char *s2);

int		map(t_map *so, int fd);

void	map_reader(t_map *so, int fd);
void	wall_checker(t_map *so);
void	checker(t_map *so);
void	ft_charcheck(t_map *so);
char	*ft_read(int fd, char *src);

int		is_reachable(t_map *so);
void	player_movable(t_map *so, int y, int x);
int		coin_check(t_map *so);
int		exit_check(t_map *so);

int		map_init(t_map so);





 

#endif
