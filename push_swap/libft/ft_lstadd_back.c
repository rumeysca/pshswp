
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*trsh;

	if (!lst)
		return ;
	if (*lst)
	{
		trsh = ft_lstlast(*lst);
		trsh->next = new;
	}
	else
		*lst = new;
}
