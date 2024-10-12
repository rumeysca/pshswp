
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	int				rank;
	struct s_list	*next;
}					t_list;

void			atoi_error(void);
int				ft_atoi(const char *str);
int				ft_isdigit(int input);
char			**ft_split(char const *s, char c);
char			*ft_strrchr(const char *str, int c);	
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(int content);
int				ft_lstsize(t_list *lst);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_strdup(const char *str);

#endif