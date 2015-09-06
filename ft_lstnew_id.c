#include "libft.h"

t_list	*ft_lstnew_id(void *point)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = point;
	new->content_size = sizeof(void*);
	new->next = NULL;
	return (NULL);
}
