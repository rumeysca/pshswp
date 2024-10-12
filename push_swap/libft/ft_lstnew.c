
#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return ((void *)0);
	ret->content = content;
	ret->rank = -1;
	ret->next = NULL;
	return (ret);
}
